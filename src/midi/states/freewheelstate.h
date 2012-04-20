/*  qrest
 *
 *  Copyright (C) 2008-2012 - Frédéric CORNU
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

#ifndef FREEWHEEL_H_
#define FREEWHEEL_H_

#include "midistate.h"

/**
 * The FreeWheel mode in which we simply discard any incoming MIDI event
 */
class FreeWheelSate: public MidiState {

public:
    FreeWheelSate();
    virtual ~FreeWheelSate();

    virtual void processEvent(const MidiEvent* event);

    /*
     * We have nothing to reset
     */
    virtual void reset() {}
};

#endif /* FREEWHEEL_H_ */
