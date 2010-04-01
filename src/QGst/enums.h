/*
    Copyright (C) 2010  George Kiagiadakis <kiagiadakis.george@gmail.com>

    This library is free software; you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published
    by the Free Software Foundation; either version 2.1 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef QGST_ENUMS_H
#define QGST_ENUMS_H

#include "../QGlib/global.h"
#include <QtCore/QFlags>

namespace QGst {
    enum MiniObjectFlag {
        MiniObjectFlagReadonly = (1<<0),
        /*padding*/
        MiniObjectFlagLast = (1<<4)
    };
    Q_DECLARE_FLAGS(MiniObjectFlags, MiniObjectFlag);
}
Q_DECLARE_OPERATORS_FOR_FLAGS(QGst::MiniObjectFlags);
QGLIB_REGISTER_TYPE(QGst::MiniObjectFlags);

#endif