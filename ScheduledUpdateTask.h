/*
 * id-updater
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#pragma once

#include <QString>

class ScheduledUpdateTaskPrivate;
class ScheduledUpdateTask
{
public:
	enum Interval {
		UNKNOWN = 0,
		DAILY = 1,
		WEEKLY = 2,
		MONTHLY = 3,
		REMOVED = 4
	};
	ScheduledUpdateTask();
	~ScheduledUpdateTask();
	bool configure(Interval interval);
	int status() const;
	bool remove();

private:
	ScheduledUpdateTaskPrivate *d;
};
