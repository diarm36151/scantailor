/*
    Scan Tailor - Interactive post-processing tool for scanned pages.
	Copyright (C)  Vadim Kuznetsov <dikbsd@gmail.com>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "SettingsManager.h"

#include <QString>

SettingsManager::SettingsManager() :
	m_despeckling("settings/output/despeckling"),
	m_bitonal_compress_g4fax("settings/output/bitonal_compress_g4fax"),
	m_use_3d_acceleration("settings/use_3d_acceleration")
{
}

SettingsManager::~SettingsManager()
{
}

// despeckling settings
void
SettingsManager::SetDespeckling(const QString& despeckle)
{
	setValue(m_despeckling, despeckle);
}

QString
SettingsManager::GetDespeckling()
{
	return value(m_despeckling, "cautious").toString();
}

// bitonal_compress_g4fax settings
void
SettingsManager::SetCompressG4Fax(bool g4fax)
{
	setValue(m_bitonal_compress_g4fax, g4fax);
}

bool
SettingsManager::GetCompressG4Fax()
{
	return value(m_bitonal_compress_g4fax, false).toBool();
}

// use_3d_acceleration settings
void
SettingsManager::SetUse3dAcceleration(bool u3d)
{
	setValue(m_use_3d_acceleration, u3d);
}

bool
SettingsManager::GetUse3dAcceleration()
{
	return value(m_use_3d_acceleration, false).toBool();
}

