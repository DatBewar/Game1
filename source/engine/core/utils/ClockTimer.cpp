/*
* ClockTimer.cpp
* Copyright (C) 2018 Croze Erwan
*
* This program is free software : you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.If not, see <http://www.gnu.org/licenses/>.
*/

#include <core/utils/ClockTimer.h>

namespace engine {
	void ClockTimer::start() {
		this->_startTime = std::chrono::high_resolution_clock::now();
		this->_status = timer_status::RUNNING;
	}

	void ClockTimer::pause() {
		this->_pauseTime = std::chrono::high_resolution_clock::now();
		this->_status = timer_status::PAUSED;
	}

	void ClockTimer::stop() {
		this->_stopTime = std::chrono::high_resolution_clock::now();
		this->_status = timer_status::STOPPED;
	}

	float_64 ClockTimer::getCurrentTime() {
		std::chrono::duration<float_64> now = std::chrono::high_resolution_clock::now().time_since_epoch();
		return now.count();
	}

	float_64 ClockTimer::getElapsedTime() {
		std::chrono::high_resolution_clock::time_point lastTime =
			(this->_status == timer_status::RUNNING) ? std::chrono::high_resolution_clock::now() :
			(this->_status == timer_status::PAUSED) ? this->_pauseTime :
			this->_stopTime;
		std::chrono::duration<float_64> elapsedTime = lastTime - this->_startTime;
		return elapsedTime.count();
	}

}