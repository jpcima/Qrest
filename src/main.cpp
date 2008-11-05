/*
 *  zest
 *
 *  Copyright (C) 2008 - Fr�d�ric CORNU
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/** \mainpage Zest Easy Studio Toolkit
 *
 *	\section intro Introduction
 *
 *	Real website is comming soon. For now, here's just the code documentation.
 *
 *	You can have a look at the code here : http://zest.wardsback.org
 *
 *	Have fun
 */

#include "model/document.h"
#include <QtGui>
#include <QApplication>
#include "gui/widgets/zestmainwindow.h"

int main(int argc, char *argv[]) {

    QApplication a(argc, argv);
    QString locale = QLocale::system().name().section('_', 0, 0);
    
    QTranslator translator;
    translator.load(QString("i18n/zest_") + locale);
    a.installTranslator(&translator);

    // create app data
    Document::getInstance();

    ZestMainWindow mainWindow;

    mainWindow.resize(mainWindow.minimumSize());

    mainWindow.show();

    int nResult = a.exec();

    // release APP data
    Document::destroy();

    return nResult;
}
