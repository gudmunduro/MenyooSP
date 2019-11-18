/*
* Menyoo PC - Grand Theft Auto V single-player trainer mod
* Copyright (C) 2019  MAFINS
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/
#pragma once

#include "natives.h"

#include "..\main.h" // scriptWait

#include <string>

using namespace _NAMESPACE1;
using namespace _NAMESPACE2;
using namespace ANIMSCENE;
using namespace _NAMESPACE4;
using namespace ATTRIBUTE;
using namespace AUDIO;
using namespace _NAMESPACE7;
using namespace BRAIN;
using namespace CAM;
using namespace CLOCK;
using namespace _NAMESPACE11;
using namespace _NAMESPACE12;
using namespace COMPENDIUM;
using namespace _NAMESPACE14;
using namespace _NAMESPACE15;
using namespace DATABINDING;
using namespace DATAFILE;
using namespace _NAMESPACE18;
using namespace DECORATOR;
using namespace DLC;
using namespace ENTITY;
using namespace EVENT;
using namespace FIRE;
using namespace _NAMESPACE24;
using namespace GRAPHICS;
using namespace _NAMESPACE26;
using namespace GOOGLE_ANALYTICS;
using namespace HUD;
using namespace _NAMESPACE29;
using namespace _NAMESPACE30;
using namespace INTERIOR;
using namespace _NAMESPACE32;
using namespace ITEMDATABASE;
using namespace ITEMSET;
using namespace _NAMESPACE35;
using namespace LOCALIZATION;
using namespace MAP;
using namespace MINIGAME;
using namespace MISC;
using namespace MISSIONDATA;
using namespace _NAMESPACE41;
using namespace NETSHOPPING;
using namespace NETWORK;
using namespace OBJECT;
using namespace PAD;
using namespace PATHFIND;
using namespace PED;
using namespace _NAMESPACE48;
using namespace _NAMESPACE49;
using namespace PHYSICS;
using namespace PLAYER;
using namespace POPULATION;
using namespace _NAMESPACE53;
using namespace _NAMESPACE54;
using namespace QUEUE;
using namespace RECORDING;
using namespace REPLAY;
using namespace SCRIPTS;
using namespace _NAMESPACE59;
using namespace SHAPETEST;
using namespace SOCIALCLUB;
using namespace SOCIALCLUBFEED;
using namespace SPACTIONPROXY;
using namespace STATS;
using namespace STREAMING;
using namespace TASK;
using namespace TELEMETRY;
using namespace TXD;
using namespace UIAPPS;
using namespace UIEVENTS;
using namespace _NAMESPACE71;
using namespace UILOG;
using namespace _NAMESPACE73;
using namespace UITUTORIAL;
using namespace UISTATEMACHINE;
using namespace _NAMESPACE76;
using namespace UNLOCK;
using namespace VEHICLE;
using namespace _NAMESPACE79;
using namespace WATER;
using namespace _NAMESPACE81;
using namespace WEAPON;
using namespace _NAMESPACE83;
using namespace _NAMESPACE84;

//#define WAIT scriptWait
static inline void WAIT(DWORD time)
{
	scriptWait(time);
}
static inline void TERMINATE()
{
	WAIT(MAXDWORD);
}

Hash GET_HASH_KEY(char* value);
Hash GET_HASH_KEY(const std::wstring& value);
Hash GET_HASH_KEY(const std::string& value);

// void add_text_component_long_string(const std::string& text);

/*namespace VEHICLE
{
	// Interior colour
	static void _0x7D1464D472D32136(Vehicle vehicle, int *interiorColour) { Native::Invoke<Void>(0x7D1464D472D32136, vehicle, interiorColour); } // 0x7D1464D472D32136
	static void _0xF40DD601A65F7F19(Vehicle vehicle, int interiorColour) { Native::Invoke<Void>(0xF40DD601A65F7F19, vehicle, interiorColour); } // 0xF40DD601A65F7F19

	// Dashboard colour
	static void _0xB7635E80A5C31BFF(Vehicle vehicle, int *dashboardColour) { Native::Invoke<Void>(0xB7635E80A5C31BFF, vehicle, dashboardColour); } // 0xB7635E80A5C31BFF
	static void _0x6089CDF6A57F326C(Vehicle vehicle, int dashboardColour) { Native::Invoke<Void>(0x6089CDF6A57F326C, vehicle, dashboardColour); } // 0x6089CDF6A57F326C

	// Imp/Exp DLC
	static BOOL _HAS_VEHICLE_ROCKET_BOOST(Vehicle vehicle) { return Native::Invoke<BOOL>(0x36D782F68B309BDA, vehicle); }
	static BOOL _IS_VEHICLE_ROCKET_BOOST_ACTIVE(Vehicle vehicle) { return Native::Invoke<BOOL>(0x3D34E80EED4AE3BE, vehicle); }
	static void _SET_VEHICLE_ROCKET_BOOST_ACTIVE(Vehicle vehicle, BOOL active) { Native::Invoke<Void>(0x81E1552E35DC3839, vehicle, active); }
	static BOOL _HAS_VEHICLE_JUMPING_ABILITY(Vehicle vehicle) { return Native::Invoke<Void>(0x9078C0C5EF8C19E9, vehicle); }
	static BOOL _HAS_VEHICLE_PARACHUTE(Vehicle vehicle) { return Native::Invoke<BOOL>(0xBC9CFF381338CB4F, vehicle); }
	static BOOL _CAN_VEHICLE_PARACHUTE_BE_ACTIVATED(Vehicle vehicle) { return Native::Invoke<BOOL>(0xA916396DF4154EE3, vehicle); }
	static void _SET_VEHICLE_PARACHUTE_ACTIVE(Vehicle vehicle, BOOL active) { Native::Invoke<Void>(0x0BFFB028B3DD0A97, vehicle, active); }
	static BOOL _IS_THIS_MODEL_AN_AMPHIBIOUS_CAR(Hash model) { return Native::Invoke<BOOL>(0x633F6F44A537EBB6, model); } // 0x633F6F44A537EBB6

	// b1604
	static INT _0x3DFF319A831E0CDB(Vehicle vehicle) { return Native::Invoke<INT>(0x3DFF319A831E0CDB, vehicle); } // 0x3DFF319A831E0CDB
	static void _0xE41033B25D003A07(Vehicle vehicle, INT value) { Native::Invoke<Void>(0xE41033B25D003A07, vehicle, value); } // 0xE41033B25D003A07
}
namespace WEAPON
{
	// Weapon (camo) liveries
	static void _0x9FE5633880ECD8ED(Ped ped, Hash weapon, Hash component, int index) { Native::Invoke<Void>(0x9FE5633880ECD8ED, ped, weapon, component, index); } // 0x9FE5633880ECD8ED
	static int _0xF0A60040BE558F2D(Ped ped, Hash weapon, Hash component) { return Native::Invoke<Any>(0xF0A60040BE558F2D, ped, weapon, component); } // 0xF0A60040BE558F2D
}*/



