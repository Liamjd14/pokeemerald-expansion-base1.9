TypeMastersHouse_MapScripts::
	.byte 0


ClefairyCry::
# 6 "data/maps/TypeMastersHouse/scripts.pory"
	lock
# 7 "data/maps/TypeMastersHouse/scripts.pory"
	faceplayer
# 8 "data/maps/TypeMastersHouse/scripts.pory"
	playmoncry SPECIES_CLEFABLE, CRY_MODE_NORMAL
# 9 "data/maps/TypeMastersHouse/scripts.pory"
	waitmoncry
# 10 "data/maps/TypeMastersHouse/scripts.pory"
	releaseall
	return


DittoCry::
# 14 "data/maps/TypeMastersHouse/scripts.pory"
	lock
# 15 "data/maps/TypeMastersHouse/scripts.pory"
	faceplayer
# 16 "data/maps/TypeMastersHouse/scripts.pory"
	playmoncry SPECIES_DITTO, CRY_MODE_NORMAL
# 17 "data/maps/TypeMastersHouse/scripts.pory"
	waitmoncry
# 18 "data/maps/TypeMastersHouse/scripts.pory"
	releaseall
	return


SmergalCry::
# 22 "data/maps/TypeMastersHouse/scripts.pory"
	lock
# 23 "data/maps/TypeMastersHouse/scripts.pory"
	faceplayer
# 24 "data/maps/TypeMastersHouse/scripts.pory"
	playmoncry SPECIES_SMEARGLE, CRY_MODE_NORMAL
# 25 "data/maps/TypeMastersHouse/scripts.pory"
	waitmoncry
# 26 "data/maps/TypeMastersHouse/scripts.pory"
	releaseall
	return


MoveMasterInteract::
# 30 "data/maps/TypeMastersHouse/scripts.pory"
	lock
# 31 "data/maps/TypeMastersHouse/scripts.pory"
	faceplayer
# 32 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MoveMasterInteract_Text_0
# 33 "data/maps/TypeMastersHouse/scripts.pory"
	releaseall
	return


Scientist1Interact::
# 37 "data/maps/TypeMastersHouse/scripts.pory"
	lock
# 38 "data/maps/TypeMastersHouse/scripts.pory"
	faceplayer
# 39 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox Scientist1Interact_Text_0
# 40 "data/maps/TypeMastersHouse/scripts.pory"
	releaseall
	return


Scientist2Interact::
# 44 "data/maps/TypeMastersHouse/scripts.pory"
	lock
# 45 "data/maps/TypeMastersHouse/scripts.pory"
	faceplayer
# 46 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox Scientist2Interact_Text_0
# 47 "data/maps/TypeMastersHouse/scripts.pory"
	releaseall
	return


Scientist3Interact::
# 51 "data/maps/TypeMastersHouse/scripts.pory"
	lock
# 52 "data/maps/TypeMastersHouse/scripts.pory"
	faceplayer
# 53 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox Scientist3Interact_Text_0
# 54 "data/maps/TypeMastersHouse/scripts.pory"
	releaseall
	return


Scientist4Interact::
# 58 "data/maps/TypeMastersHouse/scripts.pory"
	lock
# 59 "data/maps/TypeMastersHouse/scripts.pory"
	faceplayer
# 60 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox Scientist4Interact_Text_0
# 61 "data/maps/TypeMastersHouse/scripts.pory"
	releaseall
	return


MoveMasterWifeInteract::
# 65 "data/maps/TypeMastersHouse/scripts.pory"
	lock
# 66 "data/maps/TypeMastersHouse/scripts.pory"
	faceplayer
# 67 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MoveMasterWifeInteract_Text_0
# 68 "data/maps/TypeMastersHouse/scripts.pory"
	releaseall
	return


MoveMasterSonInteract::
# 72 "data/maps/TypeMastersHouse/scripts.pory"
	lock
# 73 "data/maps/TypeMastersHouse/scripts.pory"
	faceplayer
# 74 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MoveMasterSonInteract_Text_0
# 75 "data/maps/TypeMastersHouse/scripts.pory"
	releaseall
	return


PhysicalSign::
# 79 "data/maps/TypeMastersHouse/scripts.pory"
	lock
# 80 "data/maps/TypeMastersHouse/scripts.pory"
	faceplayer
# 81 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox PhysicalSign_Text_0
# 82 "data/maps/TypeMastersHouse/scripts.pory"
	releaseall
	return


SpecialSign::
# 86 "data/maps/TypeMastersHouse/scripts.pory"
	lock
# 87 "data/maps/TypeMastersHouse/scripts.pory"
	faceplayer
# 88 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox SpecialSign_Text_0
# 89 "data/maps/TypeMastersHouse/scripts.pory"
	releaseall
	return


StatusSign::
# 93 "data/maps/TypeMastersHouse/scripts.pory"
	lock
# 94 "data/maps/TypeMastersHouse/scripts.pory"
	faceplayer
# 95 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox StatusSign_Text_0
# 96 "data/maps/TypeMastersHouse/scripts.pory"
	releaseall
	return


MovePhysicalTypeSelect::
# 100 "data/maps/TypeMastersHouse/scripts.pory"
	lockall
# 101 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8008, 5000
# 102 "data/maps/TypeMastersHouse/scripts.pory"
	checkmoney 5000
# 103 "data/maps/TypeMastersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TutorCantBuy
# 104 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_0
# 105 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, MovePhysicalTypeSelect_Text_1, MovePhysicalTypeSelect_Text_2, MovePhysicalTypeSelect_Text_3, MovePhysicalTypeSelect_Text_4, MovePhysicalTypeSelect_Text_5, MovePhysicalTypeSelect_Text_6, MovePhysicalTypeSelect_Text_7, MovePhysicalTypeSelect_Text_8, MovePhysicalTypeSelect_Text_9, MovePhysicalTypeSelect_Text_10, MovePhysicalTypeSelect_Text_11, MovePhysicalTypeSelect_Text_12, MovePhysicalTypeSelect_Text_13, MovePhysicalTypeSelect_Text_14, MovePhysicalTypeSelect_Text_15, MovePhysicalTypeSelect_Text_16, MovePhysicalTypeSelect_Text_17, MovePhysicalTypeSelect_Text_18
# 106 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 107 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, MovePhysicalTypeSelect_2
# 110 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, MovePhysicalTypeSelect_3
# 113 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, MovePhysicalTypeSelect_4
# 116 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, MovePhysicalTypeSelect_5
# 119 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, MovePhysicalTypeSelect_6
# 122 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, MovePhysicalTypeSelect_7
# 125 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, MovePhysicalTypeSelect_8
# 128 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, MovePhysicalTypeSelect_9
# 131 "data/maps/TypeMastersHouse/scripts.pory"
	case 8, MovePhysicalTypeSelect_10
# 134 "data/maps/TypeMastersHouse/scripts.pory"
	case 9, MovePhysicalTypeSelect_11
# 137 "data/maps/TypeMastersHouse/scripts.pory"
	case 10, MovePhysicalTypeSelect_12
# 140 "data/maps/TypeMastersHouse/scripts.pory"
	case 11, MovePhysicalTypeSelect_13
# 143 "data/maps/TypeMastersHouse/scripts.pory"
	case 12, MovePhysicalTypeSelect_14
# 146 "data/maps/TypeMastersHouse/scripts.pory"
	case 13, MovePhysicalTypeSelect_15
# 149 "data/maps/TypeMastersHouse/scripts.pory"
	case 14, MovePhysicalTypeSelect_16
# 152 "data/maps/TypeMastersHouse/scripts.pory"
	case 15, MovePhysicalTypeSelect_17
# 155 "data/maps/TypeMastersHouse/scripts.pory"
	case 16, MovePhysicalTypeSelect_18
# 158 "data/maps/TypeMastersHouse/scripts.pory"
	case 17, MovePhysicalTypeSelect_19
# 161 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, MovePhysicalTypeSelect_20
	return

MovePhysicalTypeSelect_2:
# 108 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_19
# 109 "data/maps/TypeMastersHouse/scripts.pory"
	goto BugPhysical
	return

MovePhysicalTypeSelect_3:
# 111 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_20
# 112 "data/maps/TypeMastersHouse/scripts.pory"
	goto DarkPhysical
	return

MovePhysicalTypeSelect_4:
# 114 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_21
# 115 "data/maps/TypeMastersHouse/scripts.pory"
	goto DragonPhysical
	return

MovePhysicalTypeSelect_5:
# 117 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_22
# 118 "data/maps/TypeMastersHouse/scripts.pory"
	goto ElectricPhysical
	return

MovePhysicalTypeSelect_6:
# 120 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_23
# 121 "data/maps/TypeMastersHouse/scripts.pory"
	goto FairyPhysical
	return

MovePhysicalTypeSelect_7:
# 123 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_24
# 124 "data/maps/TypeMastersHouse/scripts.pory"
	goto FightingPhysical
	return

MovePhysicalTypeSelect_8:
# 126 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_25
# 127 "data/maps/TypeMastersHouse/scripts.pory"
	goto FirePhysical
	return

MovePhysicalTypeSelect_9:
# 129 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_26
# 130 "data/maps/TypeMastersHouse/scripts.pory"
	goto FlyingPhysical
	return

MovePhysicalTypeSelect_10:
# 132 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_27
# 133 "data/maps/TypeMastersHouse/scripts.pory"
	goto GhostPhysical
	return

MovePhysicalTypeSelect_11:
# 135 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_28
# 136 "data/maps/TypeMastersHouse/scripts.pory"
	goto GrassPhysical
	return

MovePhysicalTypeSelect_12:
# 138 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_29
# 139 "data/maps/TypeMastersHouse/scripts.pory"
	goto GroundPhysical
	return

MovePhysicalTypeSelect_13:
# 141 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_30
# 142 "data/maps/TypeMastersHouse/scripts.pory"
	goto IcePhysical
	return

MovePhysicalTypeSelect_14:
# 144 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_31
# 145 "data/maps/TypeMastersHouse/scripts.pory"
	goto NormalPhysical
	return

MovePhysicalTypeSelect_15:
# 147 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_32
# 148 "data/maps/TypeMastersHouse/scripts.pory"
	goto PoisonPhysical
	return

MovePhysicalTypeSelect_16:
# 150 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_33
# 151 "data/maps/TypeMastersHouse/scripts.pory"
	goto PsychicPhysical
	return

MovePhysicalTypeSelect_17:
# 153 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_34
# 154 "data/maps/TypeMastersHouse/scripts.pory"
	goto RockPhysical
	return

MovePhysicalTypeSelect_18:
# 156 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_35
# 157 "data/maps/TypeMastersHouse/scripts.pory"
	goto SteelPhysical
	return

MovePhysicalTypeSelect_19:
# 159 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_36
# 160 "data/maps/TypeMastersHouse/scripts.pory"
	goto WaterPhysical
	return

MovePhysicalTypeSelect_20:
# 162 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_37
# 163 "data/maps/TypeMastersHouse/scripts.pory"
	releaseall
	return


BugPhysical::
# 168 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 169 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, BugPhysical_Text_1, BugPhysical_Text_2, BugPhysical_Text_3, BugPhysical_Text_4, BugPhysical_Text_5, BugPhysical_Text_6, BugPhysical_Text_7, BugPhysical_Text_8, BugPhysical_Text_9, BugPhysical_Text_10, BugPhysical_Text_11, BugPhysical_Text_12, BugPhysical_Text_13, BugPhysical_Text_14
# 170 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 171 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, BugPhysical_2
# 174 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, BugPhysical_3
# 177 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, BugPhysical_4
# 180 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, BugPhysical_5
# 183 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, BugPhysical_6
# 186 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, BugPhysical_7
# 189 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, BugPhysical_8
# 192 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, BugPhysical_9
# 195 "data/maps/TypeMastersHouse/scripts.pory"
	case 8, BugPhysical_10
# 198 "data/maps/TypeMastersHouse/scripts.pory"
	case 9, BugPhysical_11
# 201 "data/maps/TypeMastersHouse/scripts.pory"
	case 10, BugPhysical_12
# 204 "data/maps/TypeMastersHouse/scripts.pory"
	case 11, BugPhysical_13
# 207 "data/maps/TypeMastersHouse/scripts.pory"
	case 12, BugPhysical_14
# 210 "data/maps/TypeMastersHouse/scripts.pory"
	case 13, BugPhysical_15
# 213 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, BugPhysical_16
	return

BugPhysical_2:
# 172 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PIN_MISSILE
# 173 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

BugPhysical_3:
# 175 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_TWINEEDLE
# 176 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

BugPhysical_4:
# 178 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FURY_CUTTER
# 179 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

BugPhysical_5:
# 181 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_POUNCE
# 182 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

BugPhysical_6:
# 184 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FELL_STINGER
# 185 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

BugPhysical_7:
# 187 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BUG_BITE
# 188 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

BugPhysical_8:
# 190 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_STEAMROLLER
# 191 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

BugPhysical_9:
# 193 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SKITTER_SMACK
# 194 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

BugPhysical_10:
# 196 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_U_TURN
# 197 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

BugPhysical_11:
# 199 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_LEECH_LIFE
# 200 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

BugPhysical_12:
# 202 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_X_SCISSOR
# 203 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

BugPhysical_13:
# 205 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_LUNGE
# 206 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

BugPhysical_14:
# 208 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRST_IMPRESSION
# 209 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

BugPhysical_15:
# 211 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MEGAHORN
# 212 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

BugPhysical_16:
# 214 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


DarkPhysical::
# 218 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 219 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, DarkPhysical_Text_0, DarkPhysical_Text_1, DarkPhysical_Text_2, DarkPhysical_Text_3, DarkPhysical_Text_4, DarkPhysical_Text_5, DarkPhysical_Text_6, DarkPhysical_Text_7, DarkPhysical_Text_8, DarkPhysical_Text_9, DarkPhysical_Text_10, DarkPhysical_Text_11, DarkPhysical_Text_12, DarkPhysical_Text_13, DarkPhysical_Text_14, DarkPhysical_Text_15, DarkPhysical_Text_16, DarkPhysical_Text_17, DarkPhysical_Text_18, DarkPhysical_Text_19, DarkPhysical_Text_20
# 220 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 221 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, DarkPhysical_2
# 224 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, DarkPhysical_3
# 227 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, DarkPhysical_4
# 230 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, DarkPhysical_5
# 233 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, DarkPhysical_6
# 236 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, DarkPhysical_7
# 239 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, DarkPhysical_8
# 242 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, DarkPhysical_9
# 245 "data/maps/TypeMastersHouse/scripts.pory"
	case 8, DarkPhysical_10
# 248 "data/maps/TypeMastersHouse/scripts.pory"
	case 9, DarkPhysical_11
# 251 "data/maps/TypeMastersHouse/scripts.pory"
	case 10, DarkPhysical_12
# 254 "data/maps/TypeMastersHouse/scripts.pory"
	case 11, DarkPhysical_13
# 257 "data/maps/TypeMastersHouse/scripts.pory"
	case 12, DarkPhysical_14
# 260 "data/maps/TypeMastersHouse/scripts.pory"
	case 13, DarkPhysical_15
# 263 "data/maps/TypeMastersHouse/scripts.pory"
	case 14, DarkPhysical_16
# 266 "data/maps/TypeMastersHouse/scripts.pory"
	case 15, DarkPhysical_17
# 269 "data/maps/TypeMastersHouse/scripts.pory"
	case 16, DarkPhysical_18
# 272 "data/maps/TypeMastersHouse/scripts.pory"
	case 17, DarkPhysical_19
# 275 "data/maps/TypeMastersHouse/scripts.pory"
	case 18, DarkPhysical_20
# 278 "data/maps/TypeMastersHouse/scripts.pory"
	case 19, DarkPhysical_21
# 281 "data/maps/TypeMastersHouse/scripts.pory"
	case 20, DarkPhysical_22
# 284 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, DarkPhysical_23
	return

DarkPhysical_2:
# 222 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_POWER_TRIP
# 223 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkPhysical_3:
# 225 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PURSUIT
# 226 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkPhysical_4:
# 228 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PAYBACK
# 229 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkPhysical_5:
# 231 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ASSURANCE
# 232 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkPhysical_6:
# 234 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BRUTAL_SWING
# 235 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkPhysical_7:
# 237 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FEINT_ATTACK
# 238 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkPhysical_8:
# 240 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BITE
# 241 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkPhysical_9:
# 243 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_THIEF
# 244 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkPhysical_10:
# 246 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_KNOCK_OFF
# 247 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkPhysical_11:
# 249 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SUCKER_PUNCH
# 250 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkPhysical_12:
# 252 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_NIGHT_SLASH
# 253 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkPhysical_13:
# 255 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_LASH_OUT
# 256 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkPhysical_14:
# 258 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_JAW_LOCK
# 259 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkPhysical_15:
# 261 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_CRUNCH
# 262 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkPhysical_16:
# 264 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_THROAT_CHOP
# 265 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkPhysical_17:
# 267 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DARKEST_LARIAT
# 268 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkPhysical_18:
# 270 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FOUL_PLAY
# 271 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkPhysical_19:
# 273 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PUNISHMENT
# 274 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkPhysical_20:
# 276 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BEAT_UP
# 277 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkPhysical_21:
# 279 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FLING
# 280 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkPhysical_22:
# 282 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_COMEUPPANCE
# 283 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkPhysical_23:
# 285 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


DragonPhysical::
# 289 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 290 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, DragonPhysical_Text_0, DragonPhysical_Text_1, DragonPhysical_Text_2, DragonPhysical_Text_3, DragonPhysical_Text_4, DragonPhysical_Text_5, DragonPhysical_Text_6, DragonPhysical_Text_7
# 291 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 292 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, DragonPhysical_2
# 295 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, DragonPhysical_3
# 298 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, DragonPhysical_4
# 301 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, DragonPhysical_5
# 304 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, DragonPhysical_6
# 307 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, DragonPhysical_7
# 310 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, DragonPhysical_8
# 313 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, DragonPhysical_9
# 316 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, DragonPhysical_10
	return

DragonPhysical_2:
# 293 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SCALE_SHOT
# 294 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DragonPhysical_3:
# 296 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DUAL_CHOP
# 297 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DragonPhysical_4:
# 299 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BREAKING_SWIPE
# 300 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DragonPhysical_5:
# 302 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DRAGON_CLAW
# 303 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DragonPhysical_6:
# 305 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DRAGON_TAIL
# 306 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DragonPhysical_7:
# 308 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DRAGON_HAMMER
# 309 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DragonPhysical_8:
# 311 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DRAGON_RUSH
# 312 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DragonPhysical_9:
# 314 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_OUTRAGE
# 315 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DragonPhysical_10:
# 317 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


ElectricPhysical::
# 321 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 322 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, ElectricPhysical_Text_0, ElectricPhysical_Text_1, ElectricPhysical_Text_2, ElectricPhysical_Text_3, ElectricPhysical_Text_4, ElectricPhysical_Text_5
# 323 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 324 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, ElectricPhysical_2
# 327 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, ElectricPhysical_3
# 330 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, ElectricPhysical_4
# 333 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, ElectricPhysical_5
# 336 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, ElectricPhysical_6
# 339 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, ElectricPhysical_7
# 342 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, ElectricPhysical_8
	return

ElectricPhysical_2:
# 325 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_NUZZLE
# 326 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

ElectricPhysical_3:
# 328 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_THUNDER_FANG
# 329 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

ElectricPhysical_4:
# 331 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SPARK
# 332 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

ElectricPhysical_5:
# 334 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_THUNDER_PUNCH
# 335 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

ElectricPhysical_6:
# 337 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_WILD_CHARGE
# 338 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

ElectricPhysical_7:
# 340 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SUPERCELL_SLAM
# 341 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

ElectricPhysical_8:
# 343 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


FairyPhysical::
# 347 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 348 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, FairyPhysical_Text_0, FairyPhysical_Text_1
# 349 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 350 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, FairyPhysical_2
# 353 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, FairyPhysical_3
# 356 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, FairyPhysical_4
	return

FairyPhysical_2:
# 351 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SPIRIT_BREAK
# 352 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FairyPhysical_3:
# 354 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PLAY_ROUGH
# 355 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FairyPhysical_4:
# 357 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


FightingPhysical::
# 361 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, FightingPhysical_Text_0, FightingPhysical_Text_1, FightingPhysical_Text_2, FightingPhysical_Text_3, FightingPhysical_Text_4, FightingPhysical_Text_5, FightingPhysical_Text_6, FightingPhysical_Text_7, FightingPhysical_Text_8, FightingPhysical_Text_9, FightingPhysical_Text_10, FightingPhysical_Text_11, FightingPhysical_Text_12, FightingPhysical_Text_13, FightingPhysical_Text_14, FightingPhysical_Text_15, FightingPhysical_Text_16, FightingPhysical_Text_17, FightingPhysical_Text_18, FightingPhysical_Text_19, FightingPhysical_Text_20, FightingPhysical_Text_21, FightingPhysical_Text_22, FightingPhysical_Text_23, FightingPhysical_Text_24, FightingPhysical_Text_25, FightingPhysical_Text_26, FightingPhysical_Text_27, FightingPhysical_Text_28, FightingPhysical_Text_29, FightingPhysical_Text_30, FightingPhysical_Text_31, FightingPhysical_Text_32, FightingPhysical_Text_33
# 363 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 364 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, FightingPhysical_2
# 367 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, FightingPhysical_3
# 370 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, FightingPhysical_4
# 373 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, FightingPhysical_5
# 376 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, FightingPhysical_6
# 379 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, FightingPhysical_7
# 382 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, FightingPhysical_8
# 385 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, FightingPhysical_9
# 388 "data/maps/TypeMastersHouse/scripts.pory"
	case 8, FightingPhysical_10
# 391 "data/maps/TypeMastersHouse/scripts.pory"
	case 9, FightingPhysical_11
# 394 "data/maps/TypeMastersHouse/scripts.pory"
	case 10, FightingPhysical_12
# 397 "data/maps/TypeMastersHouse/scripts.pory"
	case 11, FightingPhysical_13
# 400 "data/maps/TypeMastersHouse/scripts.pory"
	case 12, FightingPhysical_14
# 403 "data/maps/TypeMastersHouse/scripts.pory"
	case 13, FightingPhysical_15
# 406 "data/maps/TypeMastersHouse/scripts.pory"
	case 14, FightingPhysical_16
# 409 "data/maps/TypeMastersHouse/scripts.pory"
	case 15, FightingPhysical_17
# 412 "data/maps/TypeMastersHouse/scripts.pory"
	case 16, FightingPhysical_18
# 415 "data/maps/TypeMastersHouse/scripts.pory"
	case 17, FightingPhysical_19
# 418 "data/maps/TypeMastersHouse/scripts.pory"
	case 18, FightingPhysical_20
# 421 "data/maps/TypeMastersHouse/scripts.pory"
	case 19, FightingPhysical_21
# 424 "data/maps/TypeMastersHouse/scripts.pory"
	case 20, FightingPhysical_22
# 427 "data/maps/TypeMastersHouse/scripts.pory"
	case 21, FightingPhysical_23
# 430 "data/maps/TypeMastersHouse/scripts.pory"
	case 22, FightingPhysical_24
# 433 "data/maps/TypeMastersHouse/scripts.pory"
	case 23, FightingPhysical_25
# 436 "data/maps/TypeMastersHouse/scripts.pory"
	case 24, FightingPhysical_26
# 439 "data/maps/TypeMastersHouse/scripts.pory"
	case 25, FightingPhysical_27
# 442 "data/maps/TypeMastersHouse/scripts.pory"
	case 26, FightingPhysical_28
# 445 "data/maps/TypeMastersHouse/scripts.pory"
	case 27, FightingPhysical_29
# 448 "data/maps/TypeMastersHouse/scripts.pory"
	case 28, FightingPhysical_30
# 451 "data/maps/TypeMastersHouse/scripts.pory"
	case 29, FightingPhysical_31
# 454 "data/maps/TypeMastersHouse/scripts.pory"
	case 30, FightingPhysical_32
# 457 "data/maps/TypeMastersHouse/scripts.pory"
	case 31, FightingPhysical_33
# 460 "data/maps/TypeMastersHouse/scripts.pory"
	case 32, FightingPhysical_34
# 463 "data/maps/TypeMastersHouse/scripts.pory"
	case 33, FightingPhysical_35
# 466 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, FightingPhysical_36
	return

FightingPhysical_2:
# 365 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ARM_THRUST
# 366 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_3:
# 368 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DOUBLE_KICK
# 369 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_4:
# 371 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ROCK_SMASH
# 372 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_5:
# 374 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_POWER_UP_PUNCH
# 375 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_6:
# 377 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MACH_PUNCH
# 378 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_7:
# 380 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_KARATE_CHOP
# 381 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_8:
# 383 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_CIRCLE_THROW
# 384 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_9:
# 386 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_REVENGE
# 387 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_10:
# 389 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FORCE_PALM
# 390 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_11:
# 392 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_STORM_THROW
# 393 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_12:
# 395 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ROLLING_KICK
# 396 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_13:
# 398 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_UPPER_HAND
# 399 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_14:
# 401 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_LOW_SWEEP
# 402 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_15:
# 404 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_WAKE_UP_SLAP
# 405 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_16:
# 407 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_VITAL_THROW
# 408 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_17:
# 410 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DRAIN_PUNCH
# 411 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_18:
# 413 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BRICK_BREAK
# 414 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_19:
# 416 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BODY_PRESS
# 417 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_20:
# 419 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SUBMISSION
# 420 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_21:
# 422 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SKY_UPPERCUT
# 423 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_22:
# 425 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SACRED_SWORD
# 426 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_23:
# 428 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DYNAMIC_PUNCH
# 429 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_24:
# 431 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_CROSS_CHOP
# 432 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_25:
# 434 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HAMMER_ARM
# 435 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_26:
# 437 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_JUMP_KICK
# 438 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_27:
# 440 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SUPERPOWER
# 441 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_28:
# 443 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_CLOSE_COMBAT
# 444 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_29:
# 446 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_AXE_KICK
# 447 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_30:
# 449 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HIGH_JUMP_KICK
# 450 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_31:
# 452 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FOCUS_PUNCH
# 453 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_32:
# 455 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_REVERSAL
# 456 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_33:
# 458 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_LOW_KICK
# 459 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_34:
# 461 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_COUNTER
# 462 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_35:
# 464 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SEISMIC_TOSS
# 465 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingPhysical_36:
# 467 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


FirePhysical::
# 471 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 472 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, FirePhysical_Text_0, FirePhysical_Text_1, FirePhysical_Text_2, FirePhysical_Text_3, FirePhysical_Text_4, FirePhysical_Text_5, FirePhysical_Text_6, FirePhysical_Text_7, FirePhysical_Text_8, FirePhysical_Text_9, FirePhysical_Text_10
# 473 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 474 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, FirePhysical_2
# 477 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, FirePhysical_3
# 480 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, FirePhysical_4
# 483 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, FirePhysical_5
# 486 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, FirePhysical_6
# 489 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, FirePhysical_7
# 492 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, FirePhysical_8
# 495 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, FirePhysical_9
# 498 "data/maps/TypeMastersHouse/scripts.pory"
	case 8, FirePhysical_10
# 501 "data/maps/TypeMastersHouse/scripts.pory"
	case 9, FirePhysical_11
# 504 "data/maps/TypeMastersHouse/scripts.pory"
	case 10, FirePhysical_12
# 507 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, FirePhysical_13
	return

FirePhysical_2:
# 475 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FLAME_CHARGE
# 476 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FirePhysical_3:
# 478 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FLAME_WHEEL
# 479 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FirePhysical_4:
# 481 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_FANG
# 482 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FirePhysical_5:
# 484 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_TEMPER_FLARE
# 485 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FirePhysical_6:
# 487 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_PUNCH
# 488 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FirePhysical_7:
# 490 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_LASH
# 491 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FirePhysical_8:
# 493 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BLAZE_KICK
# 494 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FirePhysical_9:
# 496 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SACRED_FIRE
# 497 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FirePhysical_10:
# 499 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_RAGING_FURY
# 500 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FirePhysical_11:
# 502 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FLARE_BLITZ
# 503 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FirePhysical_12:
# 505 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HEAT_CRASH
# 506 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FirePhysical_13:
# 508 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


FlyingPhysical::
# 512 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 513 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, FlyingPhysical_Text_0, FlyingPhysical_Text_1, FlyingPhysical_Text_2, FlyingPhysical_Text_3, FlyingPhysical_Text_4, FlyingPhysical_Text_5, FlyingPhysical_Text_6, FlyingPhysical_Text_7, FlyingPhysical_Text_8, FlyingPhysical_Text_9, FlyingPhysical_Text_10, FlyingPhysical_Text_11
# 514 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 515 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, FlyingPhysical_2
# 518 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, FlyingPhysical_3
# 521 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, FlyingPhysical_4
# 524 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, FlyingPhysical_5
# 527 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, FlyingPhysical_6
# 530 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, FlyingPhysical_7
# 533 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, FlyingPhysical_8
# 536 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, FlyingPhysical_9
# 539 "data/maps/TypeMastersHouse/scripts.pory"
	case 8, FlyingPhysical_10
# 542 "data/maps/TypeMastersHouse/scripts.pory"
	case 9, FlyingPhysical_11
# 545 "data/maps/TypeMastersHouse/scripts.pory"
	case 10, FlyingPhysical_12
# 548 "data/maps/TypeMastersHouse/scripts.pory"
	case 11, FlyingPhysical_13
# 551 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, FlyingPhysical_14
	return

FlyingPhysical_2:
# 516 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PECK
# 517 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FlyingPhysical_3:
# 519 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DUAL_WINGBEAT
# 520 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FlyingPhysical_4:
# 522 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ACROBATICS
# 523 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FlyingPhysical_5:
# 525 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SKY_DROP
# 526 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FlyingPhysical_6:
# 528 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PLUCK
# 529 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FlyingPhysical_7:
# 531 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_AERIAL_ACE
# 532 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FlyingPhysical_8:
# 534 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_WING_ATTACK
# 535 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FlyingPhysical_9:
# 537 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DRILL_PECK
# 538 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FlyingPhysical_10:
# 540 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BOUNCE
# 541 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FlyingPhysical_11:
# 543 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FLY
# 544 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FlyingPhysical_12:
# 546 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BRAVE_BIRD
# 547 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FlyingPhysical_13:
# 549 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SKY_ATTACK
# 550 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FlyingPhysical_14:
# 552 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


GhostPhysical::
# 556 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 557 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, GhostPhysical_Text_0, GhostPhysical_Text_1, GhostPhysical_Text_2, GhostPhysical_Text_3, GhostPhysical_Text_4, GhostPhysical_Text_5, GhostPhysical_Text_6, GhostPhysical_Text_7
# 558 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 559 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, GhostPhysical_2
# 562 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, GhostPhysical_3
# 565 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, GhostPhysical_4
# 568 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, GhostPhysical_5
# 571 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, GhostPhysical_6
# 574 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, GhostPhysical_7
# 577 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, GhostPhysical_8
# 580 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, GhostPhysical_9
# 583 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, GhostPhysical_10
	return

GhostPhysical_2:
# 560 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ASTONISH
# 561 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GhostPhysical_3:
# 563 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_LICK
# 564 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GhostPhysical_4:
# 566 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SHADOW_SNEAK
# 567 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GhostPhysical_5:
# 569 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_LAST_RESPECTS
# 570 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GhostPhysical_6:
# 572 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SHADOW_PUNCH
# 573 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GhostPhysical_7:
# 575 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SHADOW_CLAW
# 576 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GhostPhysical_8:
# 578 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PHANTOM_FORCE
# 579 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GhostPhysical_9:
# 581 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_POLTERGEIST
# 582 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GhostPhysical_10:
# 584 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


GrassPhysical::
# 588 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 589 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, GrassPhysical_Text_0, GrassPhysical_Text_1, GrassPhysical_Text_2, GrassPhysical_Text_3, GrassPhysical_Text_4, GrassPhysical_Text_5, GrassPhysical_Text_6, GrassPhysical_Text_7, GrassPhysical_Text_8, GrassPhysical_Text_9, GrassPhysical_Text_10, GrassPhysical_Text_11, GrassPhysical_Text_12, GrassPhysical_Text_13, GrassPhysical_Text_14
# 590 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 591 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, GrassPhysical_2
# 594 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, GrassPhysical_3
# 597 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, GrassPhysical_4
# 600 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, GrassPhysical_5
# 603 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, GrassPhysical_6
# 606 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, GrassPhysical_7
# 609 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, GrassPhysical_8
# 612 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, GrassPhysical_9
# 615 "data/maps/TypeMastersHouse/scripts.pory"
	case 8, GrassPhysical_10
# 618 "data/maps/TypeMastersHouse/scripts.pory"
	case 9, GrassPhysical_11
# 621 "data/maps/TypeMastersHouse/scripts.pory"
	case 10, GrassPhysical_12
# 624 "data/maps/TypeMastersHouse/scripts.pory"
	case 11, GrassPhysical_13
# 627 "data/maps/TypeMastersHouse/scripts.pory"
	case 12, GrassPhysical_14
# 630 "data/maps/TypeMastersHouse/scripts.pory"
	case 13, GrassPhysical_15
# 633 "data/maps/TypeMastersHouse/scripts.pory"
	case 14, GrassPhysical_16
# 636 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, GrassPhysical_17
	return

GrassPhysical_2:
# 592 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BULLET_SEED
# 593 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassPhysical_3:
# 595 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_LEAFAGE
# 596 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassPhysical_4:
# 598 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BRANCH_POKE
# 599 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassPhysical_5:
# 601 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_VINE_WHIP
# 602 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassPhysical_6:
# 604 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_TRAILBLAZE
# 605 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassPhysical_7:
# 607 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_GRASSY_GLIDE
# 608 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassPhysical_8:
# 610 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_RAZOR_LEAF
# 611 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassPhysical_9:
# 613 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_NEEDLE_ARM
# 614 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassPhysical_10:
# 616 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HORN_LEECH
# 617 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassPhysical_11:
# 619 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SEED_BOMB
# 620 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassPhysical_12:
# 622 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_LEAF_BLADE
# 623 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassPhysical_13:
# 625 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PETAL_BLIZZARD
# 626 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassPhysical_14:
# 628 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_POWER_WHIP
# 629 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassPhysical_15:
# 631 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_WOOD_HAMMER
# 632 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassPhysical_16:
# 634 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SOLAR_BLADE
# 635 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassPhysical_17:
# 637 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


GroundPhysical::
# 641 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 642 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, GroundPhysical_Text_0, GroundPhysical_Text_1, GroundPhysical_Text_2, GroundPhysical_Text_3, GroundPhysical_Text_4, GroundPhysical_Text_5, GroundPhysical_Text_6, GroundPhysical_Text_7, GroundPhysical_Text_8
# 643 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 644 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, GroundPhysical_2
# 647 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, GroundPhysical_3
# 650 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, GroundPhysical_4
# 653 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, GroundPhysical_5
# 656 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, GroundPhysical_6
# 659 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, GroundPhysical_7
# 662 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, GroundPhysical_8
# 665 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, GroundPhysical_9
# 668 "data/maps/TypeMastersHouse/scripts.pory"
	case 8, GroundPhysical_10
# 671 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, GroundPhysical_11
	return

GroundPhysical_2:
# 645 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BULLDOZE
# 646 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GroundPhysical_3:
# 648 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_STOMPING_TANTRUM
# 649 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GroundPhysical_4:
# 651 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DRILL_RUN
# 652 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GroundPhysical_5:
# 654 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DIG
# 655 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GroundPhysical_6:
# 657 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HIGH_HORSEPOWER
# 658 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GroundPhysical_7:
# 660 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_EARTHQUAKE
# 661 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GroundPhysical_8:
# 663 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HEADLONG_RUSH
# 664 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GroundPhysical_9:
# 666 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MAGNITUDE
# 667 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GroundPhysical_10:
# 669 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FISSURE
# 670 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GroundPhysical_11:
# 672 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


IcePhysical::
# 676 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 677 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, IcePhysical_Text_0, IcePhysical_Text_1, IcePhysical_Text_2, IcePhysical_Text_3, IcePhysical_Text_4, IcePhysical_Text_5, IcePhysical_Text_6, IcePhysical_Text_7, IcePhysical_Text_8, IcePhysical_Text_9
# 678 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 679 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, IcePhysical_2
# 682 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, IcePhysical_3
# 685 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, IcePhysical_4
# 688 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, IcePhysical_5
# 691 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, IcePhysical_6
# 694 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, IcePhysical_7
# 697 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, IcePhysical_8
# 700 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, IcePhysical_9
# 703 "data/maps/TypeMastersHouse/scripts.pory"
	case 8, IcePhysical_10
# 706 "data/maps/TypeMastersHouse/scripts.pory"
	case 9, IcePhysical_11
# 709 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, IcePhysical_12
	return

IcePhysical_2:
# 680 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_TRIPLE_AXEL
# 681 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

IcePhysical_3:
# 683 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ICICLE_SPEAR
# 684 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

IcePhysical_4:
# 686 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ICE_BALL
# 687 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

IcePhysical_5:
# 689 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ICE_SHARD
# 690 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

IcePhysical_6:
# 692 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_AVALANCHE
# 693 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

IcePhysical_7:
# 695 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ICE_FANG
# 696 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

IcePhysical_8:
# 698 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ICE_PUNCH
# 699 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

IcePhysical_9:
# 701 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ICE_SPINNER
# 702 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

IcePhysical_10:
# 704 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ICICLE_CRASH
# 705 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

IcePhysical_11:
# 707 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ICE_HAMMER
# 708 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

IcePhysical_12:
# 710 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


NormalPhysical::
# 714 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, NormalPhysical_Text_0, NormalPhysical_Text_1, NormalPhysical_Text_2, NormalPhysical_Text_3, NormalPhysical_Text_4, NormalPhysical_Text_5, NormalPhysical_Text_6, NormalPhysical_Text_7, NormalPhysical_Text_8, NormalPhysical_Text_9, NormalPhysical_Text_10, NormalPhysical_Text_11, NormalPhysical_Text_12, NormalPhysical_Text_13, NormalPhysical_Text_14, NormalPhysical_Text_15, NormalPhysical_Text_16, NormalPhysical_Text_17, NormalPhysical_Text_18, NormalPhysical_Text_19, NormalPhysical_Text_20, NormalPhysical_Text_21, NormalPhysical_Text_22, NormalPhysical_Text_23, NormalPhysical_Text_24, NormalPhysical_Text_25, NormalPhysical_Text_26, NormalPhysical_Text_27, NormalPhysical_Text_28, NormalPhysical_Text_29, NormalPhysical_Text_30, NormalPhysical_Text_31, NormalPhysical_Text_32, NormalPhysical_Text_33, NormalPhysical_Text_34, NormalPhysical_Text_35, NormalPhysical_Text_36, NormalPhysical_Text_37, NormalPhysical_Text_38, NormalPhysical_Text_39, NormalPhysical_Text_40, NormalPhysical_Text_41, NormalPhysical_Text_42, NormalPhysical_Text_43, NormalPhysical_Text_44, NormalPhysical_Text_45, NormalPhysical_Text_46, NormalPhysical_Text_47, NormalPhysical_Text_48, NormalPhysical_Text_49, NormalPhysical_Text_50, NormalPhysical_Text_51, NormalPhysical_Text_52, NormalPhysical_Text_53, NormalPhysical_Text_54, NormalPhysical_Text_55, NormalPhysical_Text_56, NormalPhysical_Text_57, NormalPhysical_Text_58, NormalPhysical_Text_59, NormalPhysical_Text_60
# 716 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 717 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, NormalPhysical_2
# 720 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, NormalPhysical_3
# 723 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, NormalPhysical_4
# 726 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, NormalPhysical_5
# 729 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, NormalPhysical_6
# 732 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, NormalPhysical_7
# 735 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, NormalPhysical_8
# 738 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, NormalPhysical_9
# 741 "data/maps/TypeMastersHouse/scripts.pory"
	case 8, NormalPhysical_10
# 744 "data/maps/TypeMastersHouse/scripts.pory"
	case 9, NormalPhysical_11
# 747 "data/maps/TypeMastersHouse/scripts.pory"
	case 10, NormalPhysical_12
# 750 "data/maps/TypeMastersHouse/scripts.pory"
	case 11, NormalPhysical_13
# 753 "data/maps/TypeMastersHouse/scripts.pory"
	case 12, NormalPhysical_14
# 756 "data/maps/TypeMastersHouse/scripts.pory"
	case 13, NormalPhysical_15
# 759 "data/maps/TypeMastersHouse/scripts.pory"
	case 14, NormalPhysical_16
# 762 "data/maps/TypeMastersHouse/scripts.pory"
	case 15, NormalPhysical_17
# 765 "data/maps/TypeMastersHouse/scripts.pory"
	case 16, NormalPhysical_18
# 768 "data/maps/TypeMastersHouse/scripts.pory"
	case 17, NormalPhysical_19
# 771 "data/maps/TypeMastersHouse/scripts.pory"
	case 18, NormalPhysical_20
# 774 "data/maps/TypeMastersHouse/scripts.pory"
	case 19, NormalPhysical_21
# 777 "data/maps/TypeMastersHouse/scripts.pory"
	case 20, NormalPhysical_22
# 780 "data/maps/TypeMastersHouse/scripts.pory"
	case 21, NormalPhysical_23
# 783 "data/maps/TypeMastersHouse/scripts.pory"
	case 22, NormalPhysical_24
# 786 "data/maps/TypeMastersHouse/scripts.pory"
	case 23, NormalPhysical_25
# 789 "data/maps/TypeMastersHouse/scripts.pory"
	case 24, NormalPhysical_26
# 792 "data/maps/TypeMastersHouse/scripts.pory"
	case 25, NormalPhysical_27
# 795 "data/maps/TypeMastersHouse/scripts.pory"
	case 26, NormalPhysical_28
# 798 "data/maps/TypeMastersHouse/scripts.pory"
	case 27, NormalPhysical_29
# 801 "data/maps/TypeMastersHouse/scripts.pory"
	case 28, NormalPhysical_30
# 804 "data/maps/TypeMastersHouse/scripts.pory"
	case 29, NormalPhysical_31
# 807 "data/maps/TypeMastersHouse/scripts.pory"
	case 30, NormalPhysical_32
# 810 "data/maps/TypeMastersHouse/scripts.pory"
	case 31, NormalPhysical_33
# 813 "data/maps/TypeMastersHouse/scripts.pory"
	case 32, NormalPhysical_34
# 816 "data/maps/TypeMastersHouse/scripts.pory"
	case 33, NormalPhysical_35
# 819 "data/maps/TypeMastersHouse/scripts.pory"
	case 34, NormalPhysical_36
# 822 "data/maps/TypeMastersHouse/scripts.pory"
	case 35, NormalPhysical_37
# 825 "data/maps/TypeMastersHouse/scripts.pory"
	case 36, NormalPhysical_38
# 828 "data/maps/TypeMastersHouse/scripts.pory"
	case 37, NormalPhysical_39
# 831 "data/maps/TypeMastersHouse/scripts.pory"
	case 38, NormalPhysical_40
# 834 "data/maps/TypeMastersHouse/scripts.pory"
	case 39, NormalPhysical_41
# 837 "data/maps/TypeMastersHouse/scripts.pory"
	case 40, NormalPhysical_42
# 840 "data/maps/TypeMastersHouse/scripts.pory"
	case 41, NormalPhysical_43
# 843 "data/maps/TypeMastersHouse/scripts.pory"
	case 42, NormalPhysical_44
# 846 "data/maps/TypeMastersHouse/scripts.pory"
	case 43, NormalPhysical_45
# 849 "data/maps/TypeMastersHouse/scripts.pory"
	case 44, NormalPhysical_46
# 852 "data/maps/TypeMastersHouse/scripts.pory"
	case 45, NormalPhysical_47
# 855 "data/maps/TypeMastersHouse/scripts.pory"
	case 46, NormalPhysical_48
# 858 "data/maps/TypeMastersHouse/scripts.pory"
	case 47, NormalPhysical_49
# 861 "data/maps/TypeMastersHouse/scripts.pory"
	case 48, NormalPhysical_50
# 864 "data/maps/TypeMastersHouse/scripts.pory"
	case 49, NormalPhysical_51
# 867 "data/maps/TypeMastersHouse/scripts.pory"
	case 50, NormalPhysical_52
# 870 "data/maps/TypeMastersHouse/scripts.pory"
	case 51, NormalPhysical_53
# 873 "data/maps/TypeMastersHouse/scripts.pory"
	case 52, NormalPhysical_54
# 876 "data/maps/TypeMastersHouse/scripts.pory"
	case 53, NormalPhysical_55
# 879 "data/maps/TypeMastersHouse/scripts.pory"
	case 54, NormalPhysical_56
# 882 "data/maps/TypeMastersHouse/scripts.pory"
	case 55, NormalPhysical_57
# 885 "data/maps/TypeMastersHouse/scripts.pory"
	case 56, NormalPhysical_58
# 888 "data/maps/TypeMastersHouse/scripts.pory"
	case 57, NormalPhysical_59
# 891 "data/maps/TypeMastersHouse/scripts.pory"
	case 58, NormalPhysical_60
# 894 "data/maps/TypeMastersHouse/scripts.pory"
	case 59, NormalPhysical_61
# 897 "data/maps/TypeMastersHouse/scripts.pory"
	case 60, NormalPhysical_62
# 900 "data/maps/TypeMastersHouse/scripts.pory"
	case 61, NormalPhysical_63
# 903 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, NormalPhysical_64
	return

NormalPhysical_2:
# 718 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_CONSTRICT
# 719 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_3:
# 721 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DOUBLE_SLAP
# 722 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_4:
# 724 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BIND
# 725 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_5:
# 727 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FURY_ATTACK
# 728 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_6:
# 730 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_WRAP
# 731 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_7:
# 733 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FURY_SWIPES
# 734 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_8:
# 736 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_COMET_PUNCH
# 737 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_9:
# 739 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SPIKE_CANNON
# 740 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_10:
# 742 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_RAGE
# 743 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_11:
# 745 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_TAIL_SLAP
# 746 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_12:
# 748 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FEINT
# 749 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_13:
# 751 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DOUBLE_HIT
# 752 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_14:
# 754 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FAKE_OUT
# 755 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_15:
# 757 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PAY_DAY
# 758 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_16:
# 760 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_QUICK_ATTACK
# 761 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_17:
# 763 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_POUND
# 764 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_18:
# 766 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SCRATCH
# 767 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_19:
# 769 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_TACKLE
# 770 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_20:
# 772 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FALSE_SWIPE
# 773 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_21:
# 775 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HOLD_BACK
# 776 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_22:
# 778 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_CUT
# 779 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_23:
# 781 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_RAPID_SPIN
# 782 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_24:
# 784 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_VISE_GRIP
# 785 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_25:
# 787 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_COVET
# 788 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_26:
# 790 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_STOMP
# 791 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_27:
# 793 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HORN_ATTACK
# 794 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_28:
# 796 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_RETALIATE
# 797 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_29:
# 799 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DIZZY_PUNCH
# 800 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_30:
# 802 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SMELLING_SALTS
# 803 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_31:
# 805 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HEADBUTT
# 806 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_32:
# 808 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SLASH
# 809 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_33:
# 811 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FACADE
# 812 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_34:
# 814 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SECRET_POWER
# 815 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_35:
# 817 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_CHIP_AWAY
# 818 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_36:
# 820 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_CRUSH_CLAW
# 821 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_37:
# 823 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_EXTREME_SPEED
# 824 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_38:
# 826 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HYPER_FANG
# 827 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_39:
# 829 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_STRENGTH
# 830 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_40:
# 832 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SLAM
# 833 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_41:
# 835 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MEGA_PUNCH
# 836 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_42:
# 838 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BODY_SLAM
# 839 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_43:
# 841 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_TAKE_DOWN
# 842 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_44:
# 844 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ROCK_CLIMB
# 845 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_45:
# 847 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_EGG_BOMB
# 848 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_46:
# 850 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MEGA_KICK
# 851 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_47:
# 853 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_THRASH
# 854 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_48:
# 856 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DOUBLE_EDGE
# 857 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_49:
# 859 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SKULL_BASH
# 860 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_50:
# 862 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_LAST_RESORT
# 863 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_51:
# 865 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_GIGA_IMPACT
# 866 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_52:
# 868 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SELF_DESTRUCT
# 869 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_53:
# 871 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_EXPLOSION
# 872 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_54:
# 874 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ENDEAVOR
# 875 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_55:
# 877 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SUPER_FANG
# 878 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_56:
# 880 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BIDE
# 881 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_57:
# 883 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PRESENT
# 884 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_58:
# 886 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FLAIL
# 887 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_59:
# 889 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_NATURAL_GIFT
# 890 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_60:
# 892 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_RETURN
# 893 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_61:
# 895 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FRUSTRATION
# 896 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_62:
# 898 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_GUILLOTINE
# 899 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_63:
# 901 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HORN_DRILL
# 902 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalPhysical_64:
# 904 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


PoisonPhysical::
# 908 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 909 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, PoisonPhysical_Text_0, PoisonPhysical_Text_1, PoisonPhysical_Text_2, PoisonPhysical_Text_3, PoisonPhysical_Text_4, PoisonPhysical_Text_5
# 910 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 911 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, PoisonPhysical_2
# 914 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, PoisonPhysical_3
# 917 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, PoisonPhysical_4
# 920 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, PoisonPhysical_5
# 923 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, PoisonPhysical_6
# 926 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, PoisonPhysical_7
# 929 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, PoisonPhysical_8
	return

PoisonPhysical_2:
# 912 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_POISON_STING
# 913 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PoisonPhysical_3:
# 915 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_POISON_FANG
# 916 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PoisonPhysical_4:
# 918 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_POISON_TAIL
# 919 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PoisonPhysical_5:
# 921 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_CROSS_POISON
# 922 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PoisonPhysical_6:
# 924 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_POISON_JAB
# 925 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PoisonPhysical_7:
# 927 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_GUNK_SHOT
# 928 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PoisonPhysical_8:
# 930 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


PsychicPhysical::
# 934 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 935 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, PsychicPhysical_Text_0, PsychicPhysical_Text_1, PsychicPhysical_Text_2, PsychicPhysical_Text_3
# 936 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 937 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, PsychicPhysical_2
# 940 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, PsychicPhysical_3
# 943 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, PsychicPhysical_4
# 946 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, PsychicPhysical_5
# 949 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, PsychicPhysical_6
	return

PsychicPhysical_2:
# 938 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HEART_STAMP
# 939 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicPhysical_3:
# 941 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCHO_CUT
# 942 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicPhysical_4:
# 944 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ZEN_HEADBUTT
# 945 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicPhysical_5:
# 947 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCHIC_FANGS
# 948 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicPhysical_6:
# 950 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


RockPhysical::
# 954 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 955 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, RockPhysical_Text_0, RockPhysical_Text_1, RockPhysical_Text_2, RockPhysical_Text_3, RockPhysical_Text_4, RockPhysical_Text_5, RockPhysical_Text_6, RockPhysical_Text_7, RockPhysical_Text_8
# 956 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 957 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, RockPhysical_2
# 960 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, RockPhysical_3
# 963 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, RockPhysical_4
# 966 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, RockPhysical_5
# 969 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, RockPhysical_6
# 972 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, RockPhysical_7
# 975 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, RockPhysical_8
# 978 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, RockPhysical_9
# 981 "data/maps/TypeMastersHouse/scripts.pory"
	case 8, RockPhysical_10
# 984 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, RockPhysical_11
	return

RockPhysical_2:
# 958 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ROCK_BLAST
# 959 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

RockPhysical_3:
# 961 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ROLLOUT
# 962 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

RockPhysical_4:
# 964 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ROCK_THROW
# 965 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

RockPhysical_5:
# 967 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SMACK_DOWN
# 968 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

RockPhysical_6:
# 970 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ROCK_TOMB
# 971 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

RockPhysical_7:
# 973 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ROCK_SLIDE
# 974 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

RockPhysical_8:
# 976 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_STONE_EDGE
# 977 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

RockPhysical_9:
# 979 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HEAD_SMASH
# 980 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

RockPhysical_10:
# 982 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ROCK_WRECKER
# 983 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

RockPhysical_11:
# 985 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


SteelPhysical::
# 989 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 990 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, SteelPhysical_Text_0, SteelPhysical_Text_1, SteelPhysical_Text_2, SteelPhysical_Text_3, SteelPhysical_Text_4, SteelPhysical_Text_5, SteelPhysical_Text_6, SteelPhysical_Text_7, SteelPhysical_Text_8, SteelPhysical_Text_9, SteelPhysical_Text_10, SteelPhysical_Text_11, SteelPhysical_Text_12
# 991 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 992 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, SteelPhysical_2
# 995 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, SteelPhysical_3
# 998 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, SteelPhysical_4
# 1001 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, SteelPhysical_5
# 1004 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, SteelPhysical_6
# 1007 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, SteelPhysical_7
# 1010 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, SteelPhysical_8
# 1013 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, SteelPhysical_9
# 1016 "data/maps/TypeMastersHouse/scripts.pory"
	case 8, SteelPhysical_10
# 1019 "data/maps/TypeMastersHouse/scripts.pory"
	case 9, SteelPhysical_11
# 1022 "data/maps/TypeMastersHouse/scripts.pory"
	case 10, SteelPhysical_12
# 1025 "data/maps/TypeMastersHouse/scripts.pory"
	case 11, SteelPhysical_13
# 1028 "data/maps/TypeMastersHouse/scripts.pory"
	case 12, SteelPhysical_14
# 1031 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, SteelPhysical_15
	return

SteelPhysical_2:
# 993 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BULLET_PUNCH
# 994 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

SteelPhysical_3:
# 996 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_METAL_CLAW
# 997 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

SteelPhysical_4:
# 999 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MAGNET_BOMB
# 1000 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

SteelPhysical_5:
# 1002 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SMART_STRIKE
# 1003 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

SteelPhysical_6:
# 1005 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_STEEL_WING
# 1006 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

SteelPhysical_7:
# 1008 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_IRON_HEAD
# 1009 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

SteelPhysical_8:
# 1011 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_METEOR_MASH
# 1012 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

SteelPhysical_9:
# 1014 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_IRON_TAIL
# 1015 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

SteelPhysical_10:
# 1017 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_STEEL_ROLLER
# 1018 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

SteelPhysical_11:
# 1020 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_GYRO_BALL
# 1021 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

SteelPhysical_12:
# 1023 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_METAL_BURST
# 1024 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

SteelPhysical_13:
# 1026 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HEAVY_SLAM
# 1027 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

SteelPhysical_14:
# 1029 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HARD_PRESS
# 1030 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

SteelPhysical_15:
# 1032 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


WaterPhysical::
# 1036 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 1037 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, WaterPhysical_Text_0, WaterPhysical_Text_1, WaterPhysical_Text_2, WaterPhysical_Text_3, WaterPhysical_Text_4, WaterPhysical_Text_5, WaterPhysical_Text_6, WaterPhysical_Text_7, WaterPhysical_Text_8, WaterPhysical_Text_9, WaterPhysical_Text_10
# 1038 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 1039 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, WaterPhysical_2
# 1042 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, WaterPhysical_3
# 1045 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, WaterPhysical_4
# 1048 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, WaterPhysical_5
# 1051 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, WaterPhysical_6
# 1054 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, WaterPhysical_7
# 1057 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, WaterPhysical_8
# 1060 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, WaterPhysical_9
# 1063 "data/maps/TypeMastersHouse/scripts.pory"
	case 8, WaterPhysical_10
# 1066 "data/maps/TypeMastersHouse/scripts.pory"
	case 9, WaterPhysical_11
# 1069 "data/maps/TypeMastersHouse/scripts.pory"
	case 10, WaterPhysical_12
# 1072 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, WaterPhysical_13
	return

WaterPhysical_2:
# 1040 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_CLAMP
# 1041 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterPhysical_3:
# 1043 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_AQUA_JET
# 1044 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterPhysical_4:
# 1046 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FLIP_TURN
# 1047 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterPhysical_5:
# 1049 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_AQUA_CUTTER
# 1050 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterPhysical_6:
# 1052 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_RAZOR_SHELL
# 1053 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterPhysical_7:
# 1055 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DIVE
# 1056 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterPhysical_8:
# 1058 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_WATERFALL
# 1059 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterPhysical_9:
# 1061 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_LIQUIDATION
# 1062 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterPhysical_10:
# 1064 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_AQUA_TAIL
# 1065 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterPhysical_11:
# 1067 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_CRABHAMMER
# 1068 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterPhysical_12:
# 1070 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_WAVE_CRASH
# 1071 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterPhysical_13:
# 1073 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


MoveSpecialTypeSelect::
# 1079 "data/maps/TypeMastersHouse/scripts.pory"
	lockall
# 1080 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8008, 5000
# 1081 "data/maps/TypeMastersHouse/scripts.pory"
	checkmoney 5000
# 1082 "data/maps/TypeMastersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TutorCantBuy
# 1083 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MoveSpecialTypeSelect_Text_0
# 1084 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, MovePhysicalTypeSelect_Text_1, MovePhysicalTypeSelect_Text_2, MovePhysicalTypeSelect_Text_3, MovePhysicalTypeSelect_Text_4, MovePhysicalTypeSelect_Text_5, MovePhysicalTypeSelect_Text_6, MovePhysicalTypeSelect_Text_7, MovePhysicalTypeSelect_Text_8, MovePhysicalTypeSelect_Text_9, MovePhysicalTypeSelect_Text_10, MovePhysicalTypeSelect_Text_11, MovePhysicalTypeSelect_Text_12, MovePhysicalTypeSelect_Text_13, MovePhysicalTypeSelect_Text_14, MovePhysicalTypeSelect_Text_15, MovePhysicalTypeSelect_Text_16, MovePhysicalTypeSelect_Text_17, MovePhysicalTypeSelect_Text_18
# 1085 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 1086 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, MoveSpecialTypeSelect_2
# 1089 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, MoveSpecialTypeSelect_3
# 1092 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, MoveSpecialTypeSelect_4
# 1095 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, MoveSpecialTypeSelect_5
# 1098 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, MoveSpecialTypeSelect_6
# 1101 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, MoveSpecialTypeSelect_7
# 1104 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, MoveSpecialTypeSelect_8
# 1107 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, MoveSpecialTypeSelect_9
# 1110 "data/maps/TypeMastersHouse/scripts.pory"
	case 8, MoveSpecialTypeSelect_10
# 1113 "data/maps/TypeMastersHouse/scripts.pory"
	case 9, MoveSpecialTypeSelect_11
# 1116 "data/maps/TypeMastersHouse/scripts.pory"
	case 10, MoveSpecialTypeSelect_12
# 1119 "data/maps/TypeMastersHouse/scripts.pory"
	case 11, MoveSpecialTypeSelect_13
# 1122 "data/maps/TypeMastersHouse/scripts.pory"
	case 12, MoveSpecialTypeSelect_14
# 1125 "data/maps/TypeMastersHouse/scripts.pory"
	case 13, MoveSpecialTypeSelect_15
# 1128 "data/maps/TypeMastersHouse/scripts.pory"
	case 14, MoveSpecialTypeSelect_16
# 1131 "data/maps/TypeMastersHouse/scripts.pory"
	case 15, MoveSpecialTypeSelect_17
# 1134 "data/maps/TypeMastersHouse/scripts.pory"
	case 16, MoveSpecialTypeSelect_18
# 1137 "data/maps/TypeMastersHouse/scripts.pory"
	case 17, MoveSpecialTypeSelect_19
# 1140 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, MoveSpecialTypeSelect_20
	return

MoveSpecialTypeSelect_2:
# 1087 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_19
# 1088 "data/maps/TypeMastersHouse/scripts.pory"
	goto BugSpecial
	return

MoveSpecialTypeSelect_3:
# 1090 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_20
# 1091 "data/maps/TypeMastersHouse/scripts.pory"
	goto DarkSpecial
	return

MoveSpecialTypeSelect_4:
# 1093 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_21
# 1094 "data/maps/TypeMastersHouse/scripts.pory"
	goto DragonSpecial
	return

MoveSpecialTypeSelect_5:
# 1096 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_22
# 1097 "data/maps/TypeMastersHouse/scripts.pory"
	goto ElectricSpecial
	return

MoveSpecialTypeSelect_6:
# 1099 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_23
# 1100 "data/maps/TypeMastersHouse/scripts.pory"
	goto FairySpecial
	return

MoveSpecialTypeSelect_7:
# 1102 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_24
# 1103 "data/maps/TypeMastersHouse/scripts.pory"
	goto FightingSpecial
	return

MoveSpecialTypeSelect_8:
# 1105 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_25
# 1106 "data/maps/TypeMastersHouse/scripts.pory"
	goto FireSpecial
	return

MoveSpecialTypeSelect_9:
# 1108 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_26
# 1109 "data/maps/TypeMastersHouse/scripts.pory"
	goto FlyingSpecial
	return

MoveSpecialTypeSelect_10:
# 1111 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_27
# 1112 "data/maps/TypeMastersHouse/scripts.pory"
	goto GhostSpecial
	return

MoveSpecialTypeSelect_11:
# 1114 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_28
# 1115 "data/maps/TypeMastersHouse/scripts.pory"
	goto GrassSpecial
	return

MoveSpecialTypeSelect_12:
# 1117 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_29
# 1118 "data/maps/TypeMastersHouse/scripts.pory"
	goto GroundSpecial
	return

MoveSpecialTypeSelect_13:
# 1120 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_30
# 1121 "data/maps/TypeMastersHouse/scripts.pory"
	goto IceSpecial
	return

MoveSpecialTypeSelect_14:
# 1123 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_31
# 1124 "data/maps/TypeMastersHouse/scripts.pory"
	goto NormalSpecial
	return

MoveSpecialTypeSelect_15:
# 1126 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_32
# 1127 "data/maps/TypeMastersHouse/scripts.pory"
	goto PoisonSpecial
	return

MoveSpecialTypeSelect_16:
# 1129 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_33
# 1130 "data/maps/TypeMastersHouse/scripts.pory"
	goto PsychicSpecial
	return

MoveSpecialTypeSelect_17:
# 1132 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_34
# 1133 "data/maps/TypeMastersHouse/scripts.pory"
	goto RockSpecial
	return

MoveSpecialTypeSelect_18:
# 1135 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_35
# 1136 "data/maps/TypeMastersHouse/scripts.pory"
	goto SteelSpecial
	return

MoveSpecialTypeSelect_19:
# 1138 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_36
# 1139 "data/maps/TypeMastersHouse/scripts.pory"
	goto WaterSpecial
	return

MoveSpecialTypeSelect_20:
# 1141 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_37
# 1142 "data/maps/TypeMastersHouse/scripts.pory"
	releaseall
	return


BugSpecial::
# 1147 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 1148 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, BugSpecial_Text_0, BugSpecial_Text_1, BugSpecial_Text_2, BugSpecial_Text_3, BugSpecial_Text_4, BugSpecial_Text_5
# 1149 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 1150 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, BugSpecial_2
# 1153 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, BugSpecial_3
# 1156 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, BugSpecial_4
# 1159 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, BugSpecial_5
# 1162 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, BugSpecial_6
# 1165 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, BugSpecial_7
# 1168 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, BugSpecial_8
	return

BugSpecial_2:
# 1151 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_INFESTATION
# 1152 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

BugSpecial_3:
# 1154 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_STRUGGLE_BUG
# 1155 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

BugSpecial_4:
# 1157 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SILVER_WIND
# 1158 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

BugSpecial_5:
# 1160 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SIGNAL_BEAM
# 1161 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

BugSpecial_6:
# 1163 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BUG_BUZZ
# 1164 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

BugSpecial_7:
# 1166 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_POLLEN_PUFF
# 1167 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

BugSpecial_8:
# 1169 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


DarkSpecial::
# 1173 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 1174 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, DarkSpecial_Text_0, DarkSpecial_Text_1, DarkSpecial_Text_2
# 1175 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 1176 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, DarkSpecial_2
# 1179 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, DarkSpecial_3
# 1182 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, DarkSpecial_4
# 1185 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, DarkSpecial_5
	return

DarkSpecial_2:
# 1177 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SNARL
# 1178 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkSpecial_3:
# 1180 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DARK_PULSE
# 1181 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkSpecial_4:
# 1183 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_NIGHT_DAZE
# 1184 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkSpecial_5:
# 1186 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


DragonSpecial::
# 1190 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 1191 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, DragonSpecial_Text_0, DragonSpecial_Text_1, DragonSpecial_Text_2, DragonSpecial_Text_3, DragonSpecial_Text_4
# 1192 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 1193 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, DragonSpecial_2
# 1196 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, DragonSpecial_3
# 1199 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, DragonSpecial_4
# 1202 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, DragonSpecial_5
# 1205 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, DragonSpecial_6
# 1208 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, DragonSpecial_7
	return

DragonSpecial_2:
# 1194 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_TWISTER
# 1195 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DragonSpecial_3:
# 1197 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DRAGON_BREATH
# 1198 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DragonSpecial_4:
# 1200 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DRAGON_PULSE
# 1201 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DragonSpecial_5:
# 1203 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DRACO_METEOR
# 1204 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DragonSpecial_6:
# 1206 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DRAGON_RAGE
# 1207 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DragonSpecial_7:
# 1209 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


ElectricSpecial::
# 1213 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 1214 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, ElectricSpecial_Text_0, ElectricSpecial_Text_1, ElectricSpecial_Text_2, ElectricSpecial_Text_3, ElectricSpecial_Text_4, ElectricSpecial_Text_5, ElectricSpecial_Text_6, ElectricSpecial_Text_7, ElectricSpecial_Text_8, ElectricSpecial_Text_9, ElectricSpecial_Text_10, ElectricSpecial_Text_11
# 1215 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 1216 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, ElectricSpecial_2
# 1219 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, ElectricSpecial_3
# 1222 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, ElectricSpecial_4
# 1225 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, ElectricSpecial_5
# 1228 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, ElectricSpecial_6
# 1231 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, ElectricSpecial_7
# 1234 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, ElectricSpecial_8
# 1237 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, ElectricSpecial_9
# 1240 "data/maps/TypeMastersHouse/scripts.pory"
	case 8, ElectricSpecial_10
# 1243 "data/maps/TypeMastersHouse/scripts.pory"
	case 9, ElectricSpecial_11
# 1246 "data/maps/TypeMastersHouse/scripts.pory"
	case 10, ElectricSpecial_12
# 1249 "data/maps/TypeMastersHouse/scripts.pory"
	case 11, ElectricSpecial_13
# 1252 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, ElectricSpecial_14
	return

ElectricSpecial_2:
# 1217 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_THUNDER_SHOCK
# 1218 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

ElectricSpecial_3:
# 1220 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_CHARGE_BEAM
# 1221 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

ElectricSpecial_4:
# 1223 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ELECTROWEB
# 1224 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

ElectricSpecial_5:
# 1226 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SHOCK_WAVE
# 1227 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

ElectricSpecial_6:
# 1229 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PARABOLIC_CHARGE
# 1230 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

ElectricSpecial_7:
# 1232 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_VOLT_SWITCH
# 1233 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

ElectricSpecial_8:
# 1235 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_RISING_VOLTAGE
# 1236 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

ElectricSpecial_9:
# 1238 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DISCHARGE
# 1239 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

ElectricSpecial_10:
# 1241 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_THUNDERBOLT
# 1242 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

ElectricSpecial_11:
# 1244 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_THUNDER
# 1245 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

ElectricSpecial_12:
# 1247 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ZAP_CANNON
# 1248 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

ElectricSpecial_13:
# 1250 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ELECTRO_BALL
# 1251 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

ElectricSpecial_14:
# 1253 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


FairySpecial::
# 1257 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 1258 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, FairySpecial_Text_0, FairySpecial_Text_1, FairySpecial_Text_2, FairySpecial_Text_3, FairySpecial_Text_4, FairySpecial_Text_5, FairySpecial_Text_6
# 1259 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 1260 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, FairySpecial_2
# 1263 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, FairySpecial_3
# 1266 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, FairySpecial_4
# 1269 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, FairySpecial_5
# 1272 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, FairySpecial_6
# 1275 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, FairySpecial_7
# 1278 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, FairySpecial_8
# 1281 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, FairySpecial_9
	return

FairySpecial_2:
# 1261 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DISARMING_VOICE
# 1262 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FairySpecial_3:
# 1264 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FAIRY_WIND
# 1265 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FairySpecial_4:
# 1267 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DRAINING_KISS
# 1268 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FairySpecial_5:
# 1270 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DAZZLING_GLEAM
# 1271 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FairySpecial_6:
# 1273 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ALLURING_VOICE
# 1274 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FairySpecial_7:
# 1276 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MOONBLAST
# 1277 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FairySpecial_8:
# 1279 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MISTY_EXPLOSION
# 1280 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FairySpecial_9:
# 1282 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


FightingSpecial::
# 1286 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 1287 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, FightingSpecial_Text_0, FightingSpecial_Text_1, FightingSpecial_Text_2, FightingSpecial_Text_3
# 1288 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 1289 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, FightingSpecial_2
# 1292 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, FightingSpecial_3
# 1295 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, FightingSpecial_4
# 1298 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, FightingSpecial_5
# 1301 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, FightingSpecial_6
	return

FightingSpecial_2:
# 1290 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_VACUUM_WAVE
# 1291 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingSpecial_3:
# 1293 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_AURA_SPHERE
# 1294 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingSpecial_4:
# 1296 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FOCUS_BLAST
# 1297 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingSpecial_5:
# 1299 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FINAL_GAMBIT
# 1300 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingSpecial_6:
# 1302 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


FireSpecial::
# 1306 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 1307 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, FireSpecial_Text_0, FireSpecial_Text_1, FireSpecial_Text_2, FireSpecial_Text_3, FireSpecial_Text_4, FireSpecial_Text_5, FireSpecial_Text_6, FireSpecial_Text_7, FireSpecial_Text_8, FireSpecial_Text_9, FireSpecial_Text_10, FireSpecial_Text_11, FireSpecial_Text_12, FireSpecial_Text_13, FireSpecial_Text_14, FireSpecial_Text_15
# 1308 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 1309 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, FireSpecial_2
# 1312 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, FireSpecial_3
# 1315 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, FireSpecial_4
# 1318 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, FireSpecial_5
# 1321 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, FireSpecial_6
# 1324 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, FireSpecial_7
# 1327 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, FireSpecial_8
# 1330 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, FireSpecial_9
# 1333 "data/maps/TypeMastersHouse/scripts.pory"
	case 8, FireSpecial_10
# 1336 "data/maps/TypeMastersHouse/scripts.pory"
	case 9, FireSpecial_11
# 1339 "data/maps/TypeMastersHouse/scripts.pory"
	case 10, FireSpecial_12
# 1342 "data/maps/TypeMastersHouse/scripts.pory"
	case 11, FireSpecial_13
# 1345 "data/maps/TypeMastersHouse/scripts.pory"
	case 12, FireSpecial_14
# 1348 "data/maps/TypeMastersHouse/scripts.pory"
	case 13, FireSpecial_15
# 1351 "data/maps/TypeMastersHouse/scripts.pory"
	case 14, FireSpecial_16
# 1354 "data/maps/TypeMastersHouse/scripts.pory"
	case 15, FireSpecial_17
# 1357 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, FireSpecial_18
	return

FireSpecial_2:
# 1310 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_SPIN
# 1311 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FireSpecial_3:
# 1313 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_EMBER
# 1314 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FireSpecial_4:
# 1316 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_INCINERATE
# 1317 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FireSpecial_5:
# 1319 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BURNING_JEALOUSY
# 1320 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FireSpecial_6:
# 1322 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FLAME_BURST
# 1323 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FireSpecial_7:
# 1325 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MYSTICAL_FIRE
# 1326 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FireSpecial_8:
# 1328 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_PLEDGE
# 1329 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FireSpecial_9:
# 1331 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_LAVA_PLUME
# 1332 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FireSpecial_10:
# 1334 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FLAMETHROWER
# 1335 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FireSpecial_11:
# 1337 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HEAT_WAVE
# 1338 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FireSpecial_12:
# 1340 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_INFERNO
# 1341 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FireSpecial_13:
# 1343 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_BLAST
# 1344 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FireSpecial_14:
# 1346 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_OVERHEAT
# 1347 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FireSpecial_15:
# 1349 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BURN_UP
# 1350 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FireSpecial_16:
# 1352 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BLAST_BURN
# 1353 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FireSpecial_17:
# 1355 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ERUPTION
# 1356 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FireSpecial_18:
# 1358 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


FlyingSpecial::
# 1362 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 1363 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, FlyingSpecial_Text_0, FlyingSpecial_Text_1, FlyingSpecial_Text_2, FlyingSpecial_Text_3
# 1364 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 1365 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, FlyingSpecial_2
# 1368 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, FlyingSpecial_3
# 1371 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, FlyingSpecial_4
# 1374 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, FlyingSpecial_5
# 1377 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, FlyingSpecial_6
	return

FlyingSpecial_2:
# 1366 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_GUST
# 1367 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FlyingSpecial_3:
# 1369 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_AIR_CUTTER
# 1370 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FlyingSpecial_4:
# 1372 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_AIR_SLASH
# 1373 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FlyingSpecial_5:
# 1375 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HURRICANE
# 1376 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FlyingSpecial_6:
# 1378 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


GhostSpecial::
# 1382 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 1383 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, GhostSpecial_Text_0, GhostSpecial_Text_1, GhostSpecial_Text_2, GhostSpecial_Text_3
# 1384 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 1385 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, GhostSpecial_2
# 1388 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, GhostSpecial_3
# 1391 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, GhostSpecial_4
# 1394 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, GhostSpecial_5
# 1397 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, GhostSpecial_6
	return

GhostSpecial_2:
# 1386 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_OMINOUS_WIND
# 1387 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GhostSpecial_3:
# 1389 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HEX
# 1390 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GhostSpecial_4:
# 1392 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SHADOW_BALL
# 1393 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GhostSpecial_5:
# 1395 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_NIGHT_SHADE
# 1396 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GhostSpecial_6:
# 1398 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


GrassSpecial::
# 1402 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 1403 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, GrassSpecial_Text_0, GrassSpecial_Text_1, GrassSpecial_Text_2, GrassSpecial_Text_3, GrassSpecial_Text_4, GrassSpecial_Text_5, GrassSpecial_Text_6, GrassSpecial_Text_7, GrassSpecial_Text_8, GrassSpecial_Text_9, GrassSpecial_Text_10, GrassSpecial_Text_11
# 1404 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 1405 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, GrassSpecial_2
# 1408 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, GrassSpecial_3
# 1411 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, GrassSpecial_4
# 1414 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, GrassSpecial_5
# 1417 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, GrassSpecial_6
# 1420 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, GrassSpecial_7
# 1423 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, GrassSpecial_8
# 1426 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, GrassSpecial_9
# 1429 "data/maps/TypeMastersHouse/scripts.pory"
	case 8, GrassSpecial_10
# 1432 "data/maps/TypeMastersHouse/scripts.pory"
	case 9, GrassSpecial_11
# 1435 "data/maps/TypeMastersHouse/scripts.pory"
	case 10, GrassSpecial_12
# 1438 "data/maps/TypeMastersHouse/scripts.pory"
	case 11, GrassSpecial_13
# 1441 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, GrassSpecial_14
	return

GrassSpecial_2:
# 1406 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ABSORB
# 1407 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassSpecial_3:
# 1409 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MEGA_DRAIN
# 1410 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassSpecial_4:
# 1412 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MAGICAL_LEAF
# 1413 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassSpecial_5:
# 1415 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_LEAF_TORNADO
# 1416 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassSpecial_6:
# 1418 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_GIGA_DRAIN
# 1419 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassSpecial_7:
# 1421 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_GRASS_PLEDGE
# 1422 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassSpecial_8:
# 1424 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ENERGY_BALL
# 1425 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassSpecial_9:
# 1427 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SOLAR_BEAM
# 1428 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassSpecial_10:
# 1430 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PETAL_DANCE
# 1431 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassSpecial_11:
# 1433 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_LEAF_STORM
# 1434 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassSpecial_12:
# 1436 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FRENZY_PLANT
# 1437 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassSpecial_13:
# 1439 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_GRASS_KNOT
# 1440 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassSpecial_14:
# 1442 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


GroundSpecial::
# 1446 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 1447 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, GroundSpecial_Text_0, GroundSpecial_Text_1, GroundSpecial_Text_2, GroundSpecial_Text_3, GroundSpecial_Text_4
# 1448 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 1449 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, GroundSpecial_2
# 1452 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, GroundSpecial_3
# 1455 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, GroundSpecial_4
# 1458 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, GroundSpecial_5
# 1461 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, GroundSpecial_6
# 1464 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, GroundSpecial_7
	return

GroundSpecial_2:
# 1450 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MUD_SLAP
# 1451 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GroundSpecial_3:
# 1453 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MUD_SHOT
# 1454 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GroundSpecial_4:
# 1456 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MUD_BOMB
# 1457 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GroundSpecial_5:
# 1459 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SCORCHING_SANDS
# 1460 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GroundSpecial_6:
# 1462 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_EARTH_POWER
# 1463 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GroundSpecial_7:
# 1465 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


IceSpecial::
# 1469 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 1470 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, IceSpecial_Text_0, IceSpecial_Text_1, IceSpecial_Text_2, IceSpecial_Text_3, IceSpecial_Text_4, IceSpecial_Text_5, IceSpecial_Text_6, IceSpecial_Text_7
# 1471 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 1472 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, IceSpecial_2
# 1475 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, IceSpecial_3
# 1478 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, IceSpecial_4
# 1481 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, IceSpecial_5
# 1484 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, IceSpecial_6
# 1487 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, IceSpecial_7
# 1490 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, IceSpecial_8
# 1493 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, IceSpecial_9
# 1496 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, IceSpecial_10
	return

IceSpecial_2:
# 1473 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_POWDER_SNOW
# 1474 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

IceSpecial_3:
# 1476 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ICY_WIND
# 1477 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

IceSpecial_4:
# 1479 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FROST_BREATH
# 1480 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

IceSpecial_5:
# 1482 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_AURORA_BEAM
# 1483 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

IceSpecial_6:
# 1485 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FREEZE_DRY
# 1486 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

IceSpecial_7:
# 1488 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ICE_BEAM
# 1489 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

IceSpecial_8:
# 1491 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BLIZZARD
# 1492 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

IceSpecial_9:
# 1494 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SHEER_COLD
# 1495 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

IceSpecial_10:
# 1497 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


NormalSpecial::
# 1501 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, NormalSpecial_Text_0, NormalSpecial_Text_1, NormalSpecial_Text_2, NormalSpecial_Text_3, NormalSpecial_Text_4, NormalSpecial_Text_5, NormalSpecial_Text_6, NormalSpecial_Text_7, NormalSpecial_Text_8, NormalSpecial_Text_9, NormalSpecial_Text_10, NormalSpecial_Text_11, NormalSpecial_Text_12, NormalSpecial_Text_13, NormalSpecial_Text_14, NormalSpecial_Text_15, NormalSpecial_Text_16, NormalSpecial_Text_17, NormalSpecial_Text_18, NormalSpecial_Text_19, NormalSpecial_Text_20, NormalSpecial_Text_21, NormalSpecial_Text_22, NormalSpecial_Text_23, NormalSpecial_Text_24, NormalSpecial_Text_25, NormalSpecial_Text_26, NormalSpecial_Text_27, NormalSpecial_Text_28, NormalSpecial_Text_29, NormalSpecial_Text_30, NormalSpecial_Text_31, NormalSpecial_Text_32, NormalSpecial_Text_33, NormalSpecial_Text_34, NormalSpecial_Text_35, NormalSpecial_Text_36, NormalSpecial_Text_37, NormalSpecial_Text_38, NormalSpecial_Text_39, NormalSpecial_Text_40, NormalSpecial_Text_41, NormalSpecial_Text_42, NormalSpecial_Text_43, NormalSpecial_Text_44, NormalSpecial_Text_45, NormalSpecial_Text_46, NormalSpecial_Text_47, NormalSpecial_Text_48, NormalSpecial_Text_49, NormalSpecial_Text_50, NormalSpecial_Text_51, NormalSpecial_Text_52, NormalSpecial_Text_53, NormalSpecial_Text_54, NormalSpecial_Text_55, NormalSpecial_Text_56, NormalSpecial_Text_57, NormalSpecial_Text_58, NormalSpecial_Text_59, NormalSpecial_Text_60, NormalSpecial_Text_61, NormalSpecial_Text_62, NormalSpecial_Text_63, NormalSpecial_Text_64, NormalSpecial_Text_65, NormalSpecial_Text_66, NormalSpecial_Text_67, NormalSpecial_Text_68, NormalSpecial_Text_69, NormalSpecial_Text_70, NormalSpecial_Text_71, NormalSpecial_Text_72, NormalSpecial_Text_73, NormalSpecial_Text_74, NormalSpecial_Text_75, NormalSpecial_Text_76, NormalSpecial_Text_77, NormalSpecial_Text_78, NormalSpecial_Text_79, NormalSpecial_Text_80, NormalSpecial_Text_81, NormalSpecial_Text_82, NormalSpecial_Text_83, NormalSpecial_Text_84, NormalSpecial_Text_85, NormalSpecial_Text_86, NormalSpecial_Text_87, NormalSpecial_Text_88
# 1503 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 1504 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, NormalSpecial_2
# 1507 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, NormalSpecial_3
# 1510 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, NormalSpecial_4
# 1513 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, NormalSpecial_5
# 1516 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, NormalSpecial_6
# 1519 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, NormalSpecial_7
# 1522 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, NormalSpecial_8
# 1525 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, NormalSpecial_9
# 1528 "data/maps/TypeMastersHouse/scripts.pory"
	case 8, NormalSpecial_10
# 1531 "data/maps/TypeMastersHouse/scripts.pory"
	case 9, NormalSpecial_11
# 1534 "data/maps/TypeMastersHouse/scripts.pory"
	case 10, NormalSpecial_12
# 1537 "data/maps/TypeMastersHouse/scripts.pory"
	case 11, NormalSpecial_13
# 1540 "data/maps/TypeMastersHouse/scripts.pory"
	case 12, NormalSpecial_14
# 1543 "data/maps/TypeMastersHouse/scripts.pory"
	case 13, NormalSpecial_15
# 1546 "data/maps/TypeMastersHouse/scripts.pory"
	case 14, NormalSpecial_16
# 1549 "data/maps/TypeMastersHouse/scripts.pory"
	case 15, NormalSpecial_17
# 1552 "data/maps/TypeMastersHouse/scripts.pory"
	case 16, NormalSpecial_18
# 1555 "data/maps/TypeMastersHouse/scripts.pory"
	case 17, NormalSpecial_19
# 1558 "data/maps/TypeMastersHouse/scripts.pory"
	case 18, NormalSpecial_20
# 1561 "data/maps/TypeMastersHouse/scripts.pory"
	case 19, NormalSpecial_21
# 1564 "data/maps/TypeMastersHouse/scripts.pory"
	case 20, NormalSpecial_22
# 1567 "data/maps/TypeMastersHouse/scripts.pory"
	case 21, NormalSpecial_23
# 1570 "data/maps/TypeMastersHouse/scripts.pory"
	case 22, NormalSpecial_24
# 1573 "data/maps/TypeMastersHouse/scripts.pory"
	case 23, NormalSpecial_25
# 1576 "data/maps/TypeMastersHouse/scripts.pory"
	case 24, NormalSpecial_26
# 1579 "data/maps/TypeMastersHouse/scripts.pory"
	case 25, NormalSpecial_27
# 1582 "data/maps/TypeMastersHouse/scripts.pory"
	case 26, NormalSpecial_28
# 1585 "data/maps/TypeMastersHouse/scripts.pory"
	case 27, NormalSpecial_29
# 1588 "data/maps/TypeMastersHouse/scripts.pory"
	case 28, NormalSpecial_30
# 1591 "data/maps/TypeMastersHouse/scripts.pory"
	case 29, NormalSpecial_31
# 1594 "data/maps/TypeMastersHouse/scripts.pory"
	case 30, NormalSpecial_32
# 1597 "data/maps/TypeMastersHouse/scripts.pory"
	case 31, NormalSpecial_33
# 1600 "data/maps/TypeMastersHouse/scripts.pory"
	case 32, NormalSpecial_34
# 1603 "data/maps/TypeMastersHouse/scripts.pory"
	case 33, NormalSpecial_35
# 1606 "data/maps/TypeMastersHouse/scripts.pory"
	case 34, NormalSpecial_36
# 1609 "data/maps/TypeMastersHouse/scripts.pory"
	case 35, NormalSpecial_37
# 1612 "data/maps/TypeMastersHouse/scripts.pory"
	case 36, NormalSpecial_38
# 1615 "data/maps/TypeMastersHouse/scripts.pory"
	case 37, NormalSpecial_39
# 1618 "data/maps/TypeMastersHouse/scripts.pory"
	case 38, NormalSpecial_40
# 1621 "data/maps/TypeMastersHouse/scripts.pory"
	case 39, NormalSpecial_41
# 1624 "data/maps/TypeMastersHouse/scripts.pory"
	case 40, NormalSpecial_42
# 1627 "data/maps/TypeMastersHouse/scripts.pory"
	case 41, NormalSpecial_43
# 1630 "data/maps/TypeMastersHouse/scripts.pory"
	case 42, NormalSpecial_44
# 1633 "data/maps/TypeMastersHouse/scripts.pory"
	case 43, NormalSpecial_45
# 1636 "data/maps/TypeMastersHouse/scripts.pory"
	case 44, NormalSpecial_46
# 1639 "data/maps/TypeMastersHouse/scripts.pory"
	case 45, NormalSpecial_47
# 1642 "data/maps/TypeMastersHouse/scripts.pory"
	case 46, NormalSpecial_48
# 1645 "data/maps/TypeMastersHouse/scripts.pory"
	case 47, NormalSpecial_49
# 1648 "data/maps/TypeMastersHouse/scripts.pory"
	case 48, NormalSpecial_50
# 1651 "data/maps/TypeMastersHouse/scripts.pory"
	case 49, NormalSpecial_51
# 1654 "data/maps/TypeMastersHouse/scripts.pory"
	case 50, NormalSpecial_52
# 1657 "data/maps/TypeMastersHouse/scripts.pory"
	case 51, NormalSpecial_53
# 1660 "data/maps/TypeMastersHouse/scripts.pory"
	case 52, NormalSpecial_54
# 1663 "data/maps/TypeMastersHouse/scripts.pory"
	case 53, NormalSpecial_55
# 1666 "data/maps/TypeMastersHouse/scripts.pory"
	case 54, NormalSpecial_56
# 1669 "data/maps/TypeMastersHouse/scripts.pory"
	case 55, NormalSpecial_57
# 1672 "data/maps/TypeMastersHouse/scripts.pory"
	case 56, NormalSpecial_58
# 1675 "data/maps/TypeMastersHouse/scripts.pory"
	case 57, NormalSpecial_59
# 1678 "data/maps/TypeMastersHouse/scripts.pory"
	case 58, NormalSpecial_60
# 1681 "data/maps/TypeMastersHouse/scripts.pory"
	case 59, NormalSpecial_61
# 1684 "data/maps/TypeMastersHouse/scripts.pory"
	case 60, NormalSpecial_62
# 1687 "data/maps/TypeMastersHouse/scripts.pory"
	case 61, NormalSpecial_63
# 1690 "data/maps/TypeMastersHouse/scripts.pory"
	case 62, NormalSpecial_64
# 1693 "data/maps/TypeMastersHouse/scripts.pory"
	case 63, NormalSpecial_65
# 1696 "data/maps/TypeMastersHouse/scripts.pory"
	case 64, NormalSpecial_66
# 1699 "data/maps/TypeMastersHouse/scripts.pory"
	case 65, NormalSpecial_67
# 1702 "data/maps/TypeMastersHouse/scripts.pory"
	case 66, NormalSpecial_68
# 1705 "data/maps/TypeMastersHouse/scripts.pory"
	case 67, NormalSpecial_69
# 1708 "data/maps/TypeMastersHouse/scripts.pory"
	case 68, NormalSpecial_70
# 1711 "data/maps/TypeMastersHouse/scripts.pory"
	case 69, NormalSpecial_71
# 1714 "data/maps/TypeMastersHouse/scripts.pory"
	case 70, NormalSpecial_72
# 1717 "data/maps/TypeMastersHouse/scripts.pory"
	case 71, NormalSpecial_73
# 1720 "data/maps/TypeMastersHouse/scripts.pory"
	case 72, NormalSpecial_74
# 1723 "data/maps/TypeMastersHouse/scripts.pory"
	case 73, NormalSpecial_75
# 1726 "data/maps/TypeMastersHouse/scripts.pory"
	case 74, NormalSpecial_76
# 1729 "data/maps/TypeMastersHouse/scripts.pory"
	case 75, NormalSpecial_77
# 1732 "data/maps/TypeMastersHouse/scripts.pory"
	case 76, NormalSpecial_78
# 1735 "data/maps/TypeMastersHouse/scripts.pory"
	case 77, NormalSpecial_79
# 1738 "data/maps/TypeMastersHouse/scripts.pory"
	case 78, NormalSpecial_80
# 1741 "data/maps/TypeMastersHouse/scripts.pory"
	case 79, NormalSpecial_81
# 1744 "data/maps/TypeMastersHouse/scripts.pory"
	case 80, NormalSpecial_82
# 1747 "data/maps/TypeMastersHouse/scripts.pory"
	case 81, NormalSpecial_83
# 1750 "data/maps/TypeMastersHouse/scripts.pory"
	case 82, NormalSpecial_84
# 1753 "data/maps/TypeMastersHouse/scripts.pory"
	case 83, NormalSpecial_85
# 1756 "data/maps/TypeMastersHouse/scripts.pory"
	case 84, NormalSpecial_86
# 1759 "data/maps/TypeMastersHouse/scripts.pory"
	case 85, NormalSpecial_87
# 1762 "data/maps/TypeMastersHouse/scripts.pory"
	case 86, NormalSpecial_88
# 1765 "data/maps/TypeMastersHouse/scripts.pory"
	case 87, NormalSpecial_89
# 1768 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, NormalSpecial_90
	return

NormalSpecial_2:
# 1505 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_REVIVAL_BLESSING
# 1506 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_3:
# 1508 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_RECOVER
# 1509 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_4:
# 1511 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SOFT_BOILED
# 1512 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_5:
# 1514 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PERISH_SONG
# 1515 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_6:
# 1517 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HEAL_BELL
# 1518 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_7:
# 1520 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MORNING_SUN
# 1521 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_8:
# 1523 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SLACK_OFF
# 1524 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_9:
# 1526 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ENCORE
# 1527 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_10:
# 1529 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MIND_READER
# 1530 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_11:
# 1532 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_LOCK_ON
# 1533 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_12:
# 1535 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MEAN_LOOK
# 1536 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_13:
# 1538 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BLOCK
# 1539 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_14:
# 1541 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MINIMIZE
# 1542 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_15:
# 1544 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SUBSTITUTE
# 1545 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_16:
# 1547 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PROTECT
# 1548 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_17:
# 1550 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BELLY_DRUM
# 1551 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_18:
# 1553 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ENDURE
# 1554 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_19:
# 1556 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SLEEP_TALK
# 1557 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_20:
# 1559 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SWALLOW
# 1560 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_21:
# 1562 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_WISH
# 1563 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_22:
# 1565 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_RECYCLE
# 1566 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_23:
# 1568 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_STUFF_CHEEKS
# 1569 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_24:
# 1571 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_POWER_SHIFT
# 1572 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_25:
# 1574 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SHED_TAIL
# 1575 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_26:
# 1577 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_TIDY_UP
# 1578 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_27:
# 1580 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SCARY_FACE
# 1581 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_28:
# 1583 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MIMIC
# 1584 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_29:
# 1586 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCH_UP
# 1587 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_30:
# 1589 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_YAWN
# 1590 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_31:
# 1592 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DOUBLE_TEAM
# 1593 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_32:
# 1595 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SHELL_SMASH
# 1596 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_33:
# 1598 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SPOTLIGHT
# 1599 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_34:
# 1601 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SING
# 1602 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_35:
# 1604 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
# 1605 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_36:
# 1607 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ATTRACT
# 1608 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_37:
# 1610 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SIMPLE_BEAM
# 1611 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_38:
# 1613 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ENTRAINMENT
# 1614 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_39:
# 1616 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_AFTER_YOU
# 1617 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_40:
# 1619 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_REFLECT_TYPE
# 1620 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_41:
# 1622 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BESTOW
# 1623 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_42:
# 1625 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SWORDS_DANCE
# 1626 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_43:
# 1628 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_GROWTH
# 1629 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_44:
# 1631 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_STOCKPILE
# 1632 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_45:
# 1634 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FOLLOW_ME
# 1635 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_46:
# 1637 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_NATURE_POWER
# 1638 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_47:
# 1640 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HELPING_HAND
# 1641 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_48:
# 1643 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ASSIST
# 1644 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_49:
# 1646 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_REFRESH
# 1647 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_50:
# 1649 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_CAMOUFLAGE
# 1650 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_51:
# 1652 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_COPYCAT
# 1653 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_52:
# 1655 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_TEARFUL_LOOK
# 1656 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_53:
# 1658 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SUPERSONIC
# 1659 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_54:
# 1661 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DISABLE
# 1662 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_55:
# 1664 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SMOKESCREEN
# 1665 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_56:
# 1667 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FLASH
# 1668 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_57:
# 1670 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SWEET_SCENT
# 1671 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_58:
# 1673 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_TEETER_DANCE
# 1674 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_59:
# 1676 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_TICKLE
# 1677 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_60:
# 1679 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_CAPTIVATE
# 1680 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_61:
# 1682 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_WHIRLWIND
# 1683 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_62:
# 1685 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ROAR
# 1686 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_63:
# 1688 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PAIN_SPLIT
# 1689 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_64:
# 1691 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ME_FIRST
# 1692 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_65:
# 1694 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PLAY_NICE
# 1695 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_66:
# 1697 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_CONFIDE
# 1698 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_67:
# 1700 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SAFEGUARD
# 1701 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_68:
# 1703 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HARDEN
# 1704 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_69:
# 1706 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FOCUS_ENERGY
# 1707 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_70:
# 1709 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SHARPEN
# 1710 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_71:
# 1712 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ACUPRESSURE
# 1713 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_72:
# 1715 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_LUCKY_CHANT
# 1716 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_73:
# 1718 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_WORK_UP
# 1719 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_74:
# 1721 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HAPPY_HOUR
# 1722 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_75:
# 1724 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_LASER_FOCUS
# 1725 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_76:
# 1727 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_TAIL_WHIP
# 1728 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_77:
# 1730 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_LEER
# 1731 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_78:
# 1733 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_GLARE
# 1734 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_79:
# 1736 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_NOBLE_ROAR
# 1737 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_80:
# 1739 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DEFENSE_CURL
# 1740 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_81:
# 1742 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SPLASH
# 1743 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_82:
# 1745 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BATON_PASS
# 1746 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_83:
# 1748 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HOWL
# 1749 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_84:
# 1751 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_CELEBRATE
# 1752 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_85:
# 1754 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HOLD_HANDS
# 1755 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_86:
# 1757 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SCREECH
# 1758 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_87:
# 1760 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_GROWL
# 1761 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_88:
# 1763 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FORESIGHT
# 1764 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_89:
# 1766 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ODOR_SLEUTH
# 1767 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalSpecial_90:
# 1769 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


PoisonSpecial::
# 1773 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 1774 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, PoisonSpecial_Text_0, PoisonSpecial_Text_1, PoisonSpecial_Text_2, PoisonSpecial_Text_3, PoisonSpecial_Text_4, PoisonSpecial_Text_5, PoisonSpecial_Text_6, PoisonSpecial_Text_6, PoisonSpecial_Text_7
# 1775 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 1776 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, PoisonSpecial_2
# 1779 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, PoisonSpecial_3
# 1782 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, PoisonSpecial_4
# 1785 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, PoisonSpecial_5
# 1788 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, PoisonSpecial_6
# 1791 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, PoisonSpecial_7
# 1794 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, PoisonSpecial_8
# 1797 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, PoisonSpecial_9
# 1800 "data/maps/TypeMastersHouse/scripts.pory"
	case 8, PoisonSpecial_10
# 1803 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, PoisonSpecial_11
	return

PoisonSpecial_2:
# 1777 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SMOG
# 1778 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PoisonSpecial_3:
# 1780 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ACID_SPRAY
# 1781 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PoisonSpecial_4:
# 1783 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ACID
# 1784 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PoisonSpecial_5:
# 1786 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_CLEAR_SMOG
# 1787 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PoisonSpecial_6:
# 1789 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_VENOSHOCK
# 1790 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PoisonSpecial_7:
# 1792 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SLUDGE
# 1793 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PoisonSpecial_8:
# 1795 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SLUDGE_BOMB
# 1796 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PoisonSpecial_9:
# 1798 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SLUDGE_WAVE
# 1799 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PoisonSpecial_10:
# 1801 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BELCH
# 1802 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PoisonSpecial_11:
# 1804 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


PsychicSpecial::
# 1808 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 1809 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, PsychicSpecial_Text_0, PsychicSpecial_Text_1, PsychicSpecial_Text_2, PsychicSpecial_Text_3, PsychicSpecial_Text_4, PsychicSpecial_Text_5, PsychicSpecial_Text_6, MovePhysicalTypeSelect_Text_15, PsychicSpecial_Text_7, PsychicSpecial_Text_8, PsychicSpecial_Text_9, PsychicSpecial_Text_10, PsychicSpecial_Text_11
# 1810 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 1811 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, PsychicSpecial_2
# 1814 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, PsychicSpecial_3
# 1817 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, PsychicSpecial_4
# 1820 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, PsychicSpecial_5
# 1823 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, PsychicSpecial_6
# 1826 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, PsychicSpecial_7
# 1829 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, PsychicSpecial_8
# 1832 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, PsychicSpecial_9
# 1835 "data/maps/TypeMastersHouse/scripts.pory"
	case 8, PsychicSpecial_10
# 1838 "data/maps/TypeMastersHouse/scripts.pory"
	case 9, PsychicSpecial_11
# 1841 "data/maps/TypeMastersHouse/scripts.pory"
	case 10, PsychicSpecial_12
# 1844 "data/maps/TypeMastersHouse/scripts.pory"
	case 11, PsychicSpecial_13
# 1847 "data/maps/TypeMastersHouse/scripts.pory"
	case 12, PsychicSpecial_14
# 1850 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, PsychicSpecial_15
	return

PsychicSpecial_2:
# 1812 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_STORED_POWER
# 1813 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicSpecial_3:
# 1815 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_CONFUSION
# 1816 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicSpecial_4:
# 1818 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYBEAM
# 1819 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicSpecial_5:
# 1821 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCHIC_NOISE
# 1822 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicSpecial_6:
# 1824 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYSHOCK
# 1825 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicSpecial_7:
# 1827 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_EXPANDING_FORCE
# 1828 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicSpecial_8:
# 1830 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_EXTRASENSORY
# 1831 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicSpecial_9:
# 1833 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCHIC
# 1834 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicSpecial_10:
# 1836 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DREAM_EATER
# 1837 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicSpecial_11:
# 1839 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FUTURE_SIGHT
# 1840 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicSpecial_12:
# 1842 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SYNCHRONOISE
# 1843 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicSpecial_13:
# 1845 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYWAVE
# 1846 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicSpecial_14:
# 1848 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MIRROR_COAT
# 1849 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicSpecial_15:
# 1851 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


RockSpecial::
# 1855 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 1856 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, RockSpecial_Text_0, RockSpecial_Text_1, RockSpecial_Text_2
# 1857 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 1858 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, RockSpecial_2
# 1861 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, RockSpecial_3
# 1864 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, RockSpecial_4
# 1867 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, RockSpecial_5
	return

RockSpecial_2:
# 1859 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ANCIENT_POWER
# 1860 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

RockSpecial_3:
# 1862 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_POWER_GEM
# 1863 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

RockSpecial_4:
# 1865 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_METEOR_BEAM
# 1866 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

RockSpecial_5:
# 1868 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


SteelSpecial::
# 1872 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 1873 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, SteelSpecial_Text_0, SteelSpecial_Text_1, SteelSpecial_Text_2
# 1874 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 1875 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, SteelSpecial_2
# 1878 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, SteelSpecial_3
# 1881 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, SteelSpecial_4
# 1884 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, SteelSpecial_5
	return

SteelSpecial_2:
# 1876 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MIRROR_SHOT
# 1877 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

SteelSpecial_3:
# 1879 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FLASH_CANNON
# 1880 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

SteelSpecial_4:
# 1882 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_STEEL_BEAM
# 1883 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

SteelSpecial_5:
# 1885 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


WaterSpecial::
# 1889 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 1890 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, WaterSpecial_Text_0, WaterSpecial_Text_1, WaterSpecial_Text_2, WaterSpecial_Text_3, WaterSpecial_Text_4, WaterSpecial_Text_5, WaterSpecial_Text_6, WaterSpecial_Text_7, WaterSpecial_Text_8, WaterSpecial_Text_9, WaterSpecial_Text_10, WaterSpecial_Text_11, WaterSpecial_Text_12, WaterSpecial_Text_13, WaterSpecial_Text_14, WaterSpecial_Text_15
# 1891 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 1892 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, WaterSpecial_2
# 1895 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, WaterSpecial_3
# 1898 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, WaterSpecial_4
# 1901 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, WaterSpecial_5
# 1904 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, WaterSpecial_6
# 1907 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, WaterSpecial_7
# 1910 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, WaterSpecial_8
# 1913 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, WaterSpecial_9
# 1916 "data/maps/TypeMastersHouse/scripts.pory"
	case 8, WaterSpecial_10
# 1919 "data/maps/TypeMastersHouse/scripts.pory"
	case 9, WaterSpecial_11
# 1922 "data/maps/TypeMastersHouse/scripts.pory"
	case 10, WaterSpecial_12
# 1925 "data/maps/TypeMastersHouse/scripts.pory"
	case 11, WaterSpecial_13
# 1928 "data/maps/TypeMastersHouse/scripts.pory"
	case 12, WaterSpecial_14
# 1931 "data/maps/TypeMastersHouse/scripts.pory"
	case 13, WaterSpecial_15
# 1934 "data/maps/TypeMastersHouse/scripts.pory"
	case 14, WaterSpecial_16
# 1937 "data/maps/TypeMastersHouse/scripts.pory"
	case 15, WaterSpecial_17
# 1940 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, WaterSpecial_18
	return

WaterSpecial_2:
# 1893 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_WATER_SHURIKEN
# 1894 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterSpecial_3:
# 1896 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_WHIRLPOOL
# 1897 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterSpecial_4:
# 1899 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_WATER_GUN
# 1900 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterSpecial_5:
# 1902 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BUBBLE
# 1903 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterSpecial_6:
# 1905 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_CHILLING_WATER
# 1906 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterSpecial_7:
# 1908 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_WATER_PULSE
# 1909 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterSpecial_8:
# 1911 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_OCTAZOOKA
# 1912 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterSpecial_9:
# 1914 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BRINE
# 1915 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterSpecial_10:
# 1917 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BUBBLE_BEAM
# 1918 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterSpecial_11:
# 1920 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_WATER_PLEDGE
# 1921 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterSpecial_12:
# 1923 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SCALD
# 1924 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterSpecial_13:
# 1926 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MUDDY_WATER
# 1927 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterSpecial_14:
# 1929 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SURF
# 1930 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterSpecial_15:
# 1932 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HYDRO_PUMP
# 1933 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterSpecial_16:
# 1935 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HYDRO_CANNON
# 1936 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterSpecial_17:
# 1938 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_WATER_SPOUT
# 1939 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterSpecial_18:
# 1941 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


MoveStatusTypeSelect::
# 1946 "data/maps/TypeMastersHouse/scripts.pory"
	lockall
# 1947 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8008, 5000
# 1948 "data/maps/TypeMastersHouse/scripts.pory"
	checkmoney 5000
# 1949 "data/maps/TypeMastersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TutorCantBuy
# 1950 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MoveStatusTypeSelect_Text_0
# 1951 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, MovePhysicalTypeSelect_Text_1, MovePhysicalTypeSelect_Text_2, MovePhysicalTypeSelect_Text_3, MovePhysicalTypeSelect_Text_4, MovePhysicalTypeSelect_Text_5, MovePhysicalTypeSelect_Text_6, MovePhysicalTypeSelect_Text_7, MovePhysicalTypeSelect_Text_8, MovePhysicalTypeSelect_Text_9, MovePhysicalTypeSelect_Text_10, MovePhysicalTypeSelect_Text_11, MovePhysicalTypeSelect_Text_12, MovePhysicalTypeSelect_Text_13, MovePhysicalTypeSelect_Text_14, MovePhysicalTypeSelect_Text_15, MovePhysicalTypeSelect_Text_16, MovePhysicalTypeSelect_Text_17, MovePhysicalTypeSelect_Text_18
# 1952 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 1953 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, MoveStatusTypeSelect_2
# 1956 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, MoveStatusTypeSelect_3
# 1959 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, MoveStatusTypeSelect_4
# 1962 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, MoveStatusTypeSelect_5
# 1965 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, MoveStatusTypeSelect_6
# 1968 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, MoveStatusTypeSelect_7
# 1971 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, MoveStatusTypeSelect_8
# 1974 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, MoveStatusTypeSelect_9
# 1977 "data/maps/TypeMastersHouse/scripts.pory"
	case 8, MoveStatusTypeSelect_10
# 1980 "data/maps/TypeMastersHouse/scripts.pory"
	case 9, MoveStatusTypeSelect_11
# 1983 "data/maps/TypeMastersHouse/scripts.pory"
	case 10, MoveStatusTypeSelect_12
# 1986 "data/maps/TypeMastersHouse/scripts.pory"
	case 11, MoveStatusTypeSelect_13
# 1989 "data/maps/TypeMastersHouse/scripts.pory"
	case 12, MoveStatusTypeSelect_14
# 1992 "data/maps/TypeMastersHouse/scripts.pory"
	case 13, MoveStatusTypeSelect_15
# 1995 "data/maps/TypeMastersHouse/scripts.pory"
	case 14, MoveStatusTypeSelect_16
# 1998 "data/maps/TypeMastersHouse/scripts.pory"
	case 15, MoveStatusTypeSelect_17
# 2001 "data/maps/TypeMastersHouse/scripts.pory"
	case 16, MoveStatusTypeSelect_18
# 2004 "data/maps/TypeMastersHouse/scripts.pory"
	case 17, MoveStatusTypeSelect_19
# 2007 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, MoveStatusTypeSelect_20
	return

MoveStatusTypeSelect_2:
# 1954 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_19
# 1955 "data/maps/TypeMastersHouse/scripts.pory"
	goto BugStatus
	return

MoveStatusTypeSelect_3:
# 1957 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_20
# 1958 "data/maps/TypeMastersHouse/scripts.pory"
	goto DarkStatus
	return

MoveStatusTypeSelect_4:
# 1960 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_21
# 1961 "data/maps/TypeMastersHouse/scripts.pory"
	goto DragonStatus
	return

MoveStatusTypeSelect_5:
# 1963 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_22
# 1964 "data/maps/TypeMastersHouse/scripts.pory"
	goto ElectricStatus
	return

MoveStatusTypeSelect_6:
# 1966 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_23
# 1967 "data/maps/TypeMastersHouse/scripts.pory"
	goto FairyStatus
	return

MoveStatusTypeSelect_7:
# 1969 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_24
# 1970 "data/maps/TypeMastersHouse/scripts.pory"
	goto FightingStatus
	return

MoveStatusTypeSelect_8:
# 1972 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_25
# 1973 "data/maps/TypeMastersHouse/scripts.pory"
	goto FireStatus
	return

MoveStatusTypeSelect_9:
# 1975 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_26
# 1976 "data/maps/TypeMastersHouse/scripts.pory"
	goto FlyingStatus
	return

MoveStatusTypeSelect_10:
# 1978 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_27
# 1979 "data/maps/TypeMastersHouse/scripts.pory"
	goto GhostStatus
	return

MoveStatusTypeSelect_11:
# 1981 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_28
# 1982 "data/maps/TypeMastersHouse/scripts.pory"
	goto GrassStatus
	return

MoveStatusTypeSelect_12:
# 1984 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_29
# 1985 "data/maps/TypeMastersHouse/scripts.pory"
	goto GroundStatus
	return

MoveStatusTypeSelect_13:
# 1987 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_30
# 1988 "data/maps/TypeMastersHouse/scripts.pory"
	goto IceStatus
	return

MoveStatusTypeSelect_14:
# 1990 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_31
# 1991 "data/maps/TypeMastersHouse/scripts.pory"
	goto NormalStatus
	return

MoveStatusTypeSelect_15:
# 1993 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_32
# 1994 "data/maps/TypeMastersHouse/scripts.pory"
	goto PoisonStatus
	return

MoveStatusTypeSelect_16:
# 1996 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_33
# 1997 "data/maps/TypeMastersHouse/scripts.pory"
	goto PsychicStatus
	return

MoveStatusTypeSelect_17:
# 1999 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_34
# 2000 "data/maps/TypeMastersHouse/scripts.pory"
	goto RockStatus
	return

MoveStatusTypeSelect_18:
# 2002 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_35
# 2003 "data/maps/TypeMastersHouse/scripts.pory"
	goto SteelStatus
	return

MoveStatusTypeSelect_19:
# 2005 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_36
# 2006 "data/maps/TypeMastersHouse/scripts.pory"
	goto WaterStatus
	return

MoveStatusTypeSelect_20:
# 2008 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox MovePhysicalTypeSelect_Text_37
# 2009 "data/maps/TypeMastersHouse/scripts.pory"
	releaseall
	return


BugStatus::
# 2014 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 2015 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, BugStatus_Text_0, BugStatus_Text_1, BugStatus_Text_2, BugStatus_Text_3, BugStatus_Text_4, BugStatus_Text_5, BugStatus_Text_6
# 2016 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 2017 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, BugStatus_2
# 2020 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, BugStatus_3
# 2023 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, BugStatus_4
# 2026 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, BugStatus_5
# 2029 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, BugStatus_6
# 2032 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, BugStatus_7
# 2035 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, BugStatus_8
# 2038 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, BugStatus_9
	return

BugStatus_2:
# 2018 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SPIDER_WEB
# 2019 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

BugStatus_3:
# 2021 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_TAIL_GLOW
# 2022 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

BugStatus_4:
# 2024 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_RAGE_POWDER
# 2025 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

BugStatus_5:
# 2027 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_QUIVER_DANCE
# 2028 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

BugStatus_6:
# 2030 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_STICKY_WEB
# 2031 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

BugStatus_7:
# 2033 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_POWDER
# 2034 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

BugStatus_8:
# 2036 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_STRING_SHOT
# 2037 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

BugStatus_9:
# 2039 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


DarkStatus::
# 2043 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 2044 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, DarkStatus_Text_0, DarkStatus_Text_1, DarkStatus_Text_2, DarkStatus_Text_3, DarkStatus_Text_4, DarkStatus_Text_5, DarkStatus_Text_6, DarkStatus_Text_7, DarkStatus_Text_8, DarkStatus_Text_9, DarkStatus_Text_10, DarkStatus_Text_11
# 2045 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 2046 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, DarkStatus_2
# 2049 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, DarkStatus_3
# 2052 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, DarkStatus_4
# 2055 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, DarkStatus_5
# 2058 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, DarkStatus_6
# 2061 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, DarkStatus_7
# 2064 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, DarkStatus_8
# 2067 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, DarkStatus_9
# 2070 "data/maps/TypeMastersHouse/scripts.pory"
	case 8, DarkStatus_10
# 2073 "data/maps/TypeMastersHouse/scripts.pory"
	case 9, DarkStatus_11
# 2076 "data/maps/TypeMastersHouse/scripts.pory"
	case 10, DarkStatus_12
# 2079 "data/maps/TypeMastersHouse/scripts.pory"
	case 11, DarkStatus_13
# 2082 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, DarkStatus_14
	return

DarkStatus_2:
# 2047 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SNATCH
# 2048 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkStatus_3:
# 2050 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MEMENTO
# 2051 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkStatus_4:
# 2053 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SWITCHEROO
# 2054 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkStatus_5:
# 2056 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HONE_CLAWS
# 2057 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkStatus_6:
# 2059 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_TORMENT
# 2060 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkStatus_7:
# 2062 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FLATTER
# 2063 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkStatus_8:
# 2065 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_EMBARGO
# 2066 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkStatus_9:
# 2068 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_QUASH
# 2069 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkStatus_10:
# 2071 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_NASTY_PLOT
# 2072 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkStatus_11:
# 2074 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_TAUNT
# 2075 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkStatus_12:
# 2077 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FAKE_TEARS
# 2078 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkStatus_13:
# 2080 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PARTING_SHOT
# 2081 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DarkStatus_14:
# 2083 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


DragonStatus::
# 2087 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 2088 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, DragonStatus_Text_0, DragonStatus_Text_1
# 2089 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 2090 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, DragonStatus_2
# 2093 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, DragonStatus_3
# 2096 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, DragonStatus_4
	return

DragonStatus_2:
# 2091 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DRAGON_CHEER
# 2092 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DragonStatus_3:
# 2094 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DRAGON_DANCE
# 2095 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

DragonStatus_4:
# 2097 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


ElectricStatus::
# 2101 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 2102 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, ElectricStatus_Text_0, ElectricStatus_Text_1, ElectricStatus_Text_2, ElectricStatus_Text_3, ElectricStatus_Text_4, ElectricStatus_Text_5, ElectricStatus_Text_6, ElectricStatus_Text_7
# 2103 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 2104 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, ElectricStatus_2
# 2107 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, ElectricStatus_3
# 2110 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, ElectricStatus_4
# 2113 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, ElectricStatus_5
# 2116 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, ElectricStatus_6
# 2119 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, ElectricStatus_7
# 2122 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, ElectricStatus_8
# 2125 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, ElectricStatus_9
# 2128 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, ElectricStatus_10
	return

ElectricStatus_2:
# 2105 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MAGNET_RISE
# 2106 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

ElectricStatus_3:
# 2108 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ELECTRIC_TERRAIN
# 2109 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

ElectricStatus_4:
# 2111 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_EERIE_IMPULSE
# 2112 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

ElectricStatus_5:
# 2114 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_CHARGE
# 2115 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

ElectricStatus_6:
# 2117 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MAGNETIC_FLUX
# 2118 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

ElectricStatus_7:
# 2120 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_THUNDER_WAVE
# 2121 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

ElectricStatus_8:
# 2123 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ELECTRIFY
# 2124 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

ElectricStatus_9:
# 2126 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ION_DELUGE
# 2127 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

ElectricStatus_10:
# 2129 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


FairyStatus::
# 2133 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 2134 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, FairyStatus_Text_0, FairyStatus_Text_1, FairyStatus_Text_2, FairyStatus_Text_3, FairyStatus_Text_4, FairyStatus_Text_5, FairyStatus_Text_6, FairyStatus_Text_7
# 2135 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 2136 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, FairyStatus_2
# 2139 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, FairyStatus_3
# 2142 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, FairyStatus_4
# 2145 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, FairyStatus_5
# 2148 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, FairyStatus_6
# 2151 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, FairyStatus_7
# 2154 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, FairyStatus_8
# 2157 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, FairyStatus_9
# 2160 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, FairyStatus_10
	return

FairyStatus_2:
# 2137 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MOONLIGHT
# 2138 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FairyStatus_3:
# 2140 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_CRAFTY_SHIELD
# 2141 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FairyStatus_4:
# 2143 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FLOWER_SHIELD
# 2144 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FairyStatus_5:
# 2146 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MISTY_TERRAIN
# 2147 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FairyStatus_6:
# 2149 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SWEET_KISS
# 2150 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FairyStatus_7:
# 2152 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_AROMATIC_MIST
# 2153 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FairyStatus_8:
# 2155 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_CHARM
# 2156 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FairyStatus_9:
# 2158 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BABY_DOLL_EYES
# 2159 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FairyStatus_10:
# 2161 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


FightingStatus::
# 2165 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 2166 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, FightingStatus_Text_0, FightingStatus_Text_1, FightingStatus_Text_2, FightingStatus_Text_3, FightingStatus_Text_4
# 2167 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 2168 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, FightingStatus_2
# 2171 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, FightingStatus_3
# 2174 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, FightingStatus_4
# 2177 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, FightingStatus_5
# 2180 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, FightingStatus_6
# 2183 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, FightingStatus_7
	return

FightingStatus_2:
# 2169 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DETECT
# 2170 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingStatus_3:
# 2172 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MAT_BLOCK
# 2173 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingStatus_4:
# 2175 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_COACHING
# 2176 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingStatus_5:
# 2178 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_QUICK_GUARD
# 2179 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingStatus_6:
# 2181 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BULK_UP
# 2182 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FightingStatus_7:
# 2184 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


FireStatus::
# 2188 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 2189 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, FireStatus_Text_0, FireStatus_Text_1
# 2190 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 2191 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, FireStatus_2
# 2194 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, FireStatus_3
# 2197 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, FireStatus_4
	return

FireStatus_2:
# 2192 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SUNNY_DAY
# 2193 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FireStatus_3:
# 2195 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_WILL_O_WISP
# 2196 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FireStatus_4:
# 2198 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


FlyingStatus::
# 2202 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 2203 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, FlyingStatus_Text_0, FlyingStatus_Text_1, FlyingStatus_Text_2, FlyingStatus_Text_3, FlyingStatus_Text_4
# 2204 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 2205 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, FlyingStatus_2
# 2208 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, FlyingStatus_3
# 2211 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, FlyingStatus_4
# 2214 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, FlyingStatus_5
# 2217 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, FlyingStatus_6
# 2220 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, FlyingStatus_7
	return

FlyingStatus_2:
# 2206 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ROOST
# 2207 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FlyingStatus_3:
# 2209 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_TAILWIND
# 2210 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FlyingStatus_4:
# 2212 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FEATHER_DANCE
# 2213 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FlyingStatus_5:
# 2215 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DEFOG
# 2216 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FlyingStatus_6:
# 2218 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MIRROR_MOVE
# 2219 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

FlyingStatus_7:
# 2221 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


GhostStatus::
# 2225 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 2226 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, GhostStatus_Text_0, GhostStatus_Text_1, GhostStatus_Text_2, GhostStatus_Text_3, GhostStatus_Text_4, GhostStatus_Text_5
# 2227 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 2228 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, GhostStatus_2
# 2231 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, GhostStatus_3
# 2234 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, GhostStatus_4
# 2237 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, GhostStatus_5
# 2240 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, GhostStatus_6
# 2243 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, GhostStatus_7
# 2246 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, GhostStatus_8
	return

GhostStatus_2:
# 2229 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DESTINY_BOND
# 2230 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GhostStatus_3:
# 2232 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_GRUDGE
# 2233 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GhostStatus_4:
# 2235 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_CURSE
# 2236 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GhostStatus_5:
# 2238 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_CONFUSE_RAY
# 2239 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GhostStatus_6:
# 2241 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SPITE
# 2242 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GhostStatus_7:
# 2244 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_NIGHTMARE
# 2245 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GhostStatus_8:
# 2247 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


GrassStatus::
# 2251 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 2252 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, GrassStatus_Text_0, GrassStatus_Text_1, GrassStatus_Text_2, GrassStatus_Text_3, GrassStatus_Text_4, GrassStatus_Text_5, GrassStatus_Text_6, GrassStatus_Text_7, GrassStatus_Text_8, GrassStatus_Text_9, GrassStatus_Text_10, GrassStatus_Text_11, GrassStatus_Text_12, GrassStatus_Text_13
# 2253 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 2254 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, GrassStatus_2
# 2257 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, GrassStatus_3
# 2260 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, GrassStatus_4
# 2263 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, GrassStatus_5
# 2266 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, GrassStatus_6
# 2269 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, GrassStatus_7
# 2272 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, GrassStatus_8
# 2275 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, GrassStatus_9
# 2278 "data/maps/TypeMastersHouse/scripts.pory"
	case 8, GrassStatus_10
# 2281 "data/maps/TypeMastersHouse/scripts.pory"
	case 9, GrassStatus_11
# 2284 "data/maps/TypeMastersHouse/scripts.pory"
	case 10, GrassStatus_12
# 2287 "data/maps/TypeMastersHouse/scripts.pory"
	case 11, GrassStatus_13
# 2290 "data/maps/TypeMastersHouse/scripts.pory"
	case 12, GrassStatus_14
# 2293 "data/maps/TypeMastersHouse/scripts.pory"
	case 13, GrassStatus_15
# 2296 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, GrassStatus_16
	return

GrassStatus_2:
# 2255 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SYNTHESIS
# 2256 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassStatus_3:
# 2258 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_AROMATHERAPY
# 2259 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassStatus_4:
# 2261 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_COTTON_GUARD
# 2262 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassStatus_5:
# 2264 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_GRASSY_TERRAIN
# 2265 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassStatus_6:
# 2267 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SPIKY_SHIELD
# 2268 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassStatus_7:
# 2270 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_LEECH_SEED
# 2271 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassStatus_8:
# 2273 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_WORRY_SEED
# 2274 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassStatus_9:
# 2276 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_STRENGTH_SAP
# 2277 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassStatus_10:
# 2279 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_GRASS_WHISTLE
# 2280 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassStatus_11:
# 2282 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SLEEP_POWDER
# 2283 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassStatus_12:
# 2285 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SPORE
# 2286 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassStatus_13:
# 2288 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_INGRAIN
# 2289 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassStatus_14:
# 2291 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_STUN_SPORE
# 2292 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassStatus_15:
# 2294 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_COTTON_SPORE
# 2295 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GrassStatus_16:
# 2297 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


GroundStatus::
# 2301 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 2302 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, GroundStatus_Text_0, GroundStatus_Text_1, GroundStatus_Text_2, GroundStatus_Text_3
# 2303 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 2304 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, GroundStatus_2
# 2307 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, GroundStatus_3
# 2310 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, GroundStatus_4
# 2313 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, GroundStatus_5
# 2316 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, GroundStatus_6
	return

GroundStatus_2:
# 2305 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ROTOTILLER
# 2306 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GroundStatus_3:
# 2308 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MUD_SPORT
# 2309 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GroundStatus_4:
# 2311 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SAND_ATTACK
# 2312 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GroundStatus_5:
# 2314 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SPIKES
# 2315 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

GroundStatus_6:
# 2317 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


IceStatus::
# 2321 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 2322 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, IceStatus_Text_0, IceStatus_Text_1, IceStatus_Text_2, IceStatus_Text_3
# 2323 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 2324 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, IceStatus_2
# 2327 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, IceStatus_3
# 2330 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, IceStatus_4
# 2333 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, IceStatus_5
# 2336 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, IceStatus_6
	return

IceStatus_2:
# 2325 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HAIL
# 2326 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

IceStatus_3:
# 2328 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_AURORA_VEIL
# 2329 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

IceStatus_4:
# 2331 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MIST
# 2332 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

IceStatus_5:
# 2334 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HAZE
# 2335 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

IceStatus_6:
# 2337 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


NormalStatus::
# 2341 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 2342 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, DarkPhysical_Text_0, DarkPhysical_Text_2, DarkPhysical_Text_3, DarkPhysical_Text_4, DarkPhysical_Text_5, DarkPhysical_Text_6, DarkPhysical_Text_9, DarkPhysical_Text_10, DarkPhysical_Text_11, DarkPhysical_Text_12, DarkPhysical_Text_15, DarkPhysical_Text_16, DarkPhysical_Text_17, DarkPhysical_Text_18, DarkPhysical_Text_19, DarkPhysical_Text_20
# 2343 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 2344 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, NormalStatus_2
# 2347 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, NormalStatus_3
# 2350 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, NormalStatus_4
# 2353 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, NormalStatus_5
# 2356 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, NormalStatus_6
# 2359 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, NormalStatus_7
# 2362 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, NormalStatus_8
# 2365 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, NormalStatus_9
# 2368 "data/maps/TypeMastersHouse/scripts.pory"
	case 8, NormalStatus_10
# 2371 "data/maps/TypeMastersHouse/scripts.pory"
	case 9, NormalStatus_11
# 2374 "data/maps/TypeMastersHouse/scripts.pory"
	case 10, NormalStatus_12
# 2377 "data/maps/TypeMastersHouse/scripts.pory"
	case 11, NormalStatus_13
# 2380 "data/maps/TypeMastersHouse/scripts.pory"
	case 12, NormalStatus_14
# 2383 "data/maps/TypeMastersHouse/scripts.pory"
	case 13, NormalStatus_15
# 2386 "data/maps/TypeMastersHouse/scripts.pory"
	case 14, NormalStatus_16
# 2389 "data/maps/TypeMastersHouse/scripts.pory"
	case 15, NormalStatus_17
# 2392 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, NormalStatus_18
	return

NormalStatus_2:
# 2345 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_POWER_TRIP
# 2346 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalStatus_3:
# 2348 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PAYBACK
# 2349 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalStatus_4:
# 2351 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ASSURANCE
# 2352 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalStatus_5:
# 2354 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BRUTAL_SWING
# 2355 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalStatus_6:
# 2357 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FEINT_ATTACK
# 2358 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalStatus_7:
# 2360 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BITE
# 2361 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalStatus_8:
# 2363 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SUCKER_PUNCH
# 2364 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalStatus_9:
# 2366 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_NIGHT_SLASH
# 2367 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalStatus_10:
# 2369 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_LASH_OUT
# 2370 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalStatus_11:
# 2372 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_JAW_LOCK
# 2373 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalStatus_12:
# 2375 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DARKEST_LARIAT
# 2376 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalStatus_13:
# 2378 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FOUL_PLAY
# 2379 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalStatus_14:
# 2381 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PUNISHMENT
# 2382 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalStatus_15:
# 2384 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BEAT_UP
# 2385 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalStatus_16:
# 2387 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_FLING
# 2388 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalStatus_17:
# 2390 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_COMEUPPANCE
# 2391 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

NormalStatus_18:
# 2393 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


PoisonStatus::
# 2397 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 2398 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, PoisonStatus_Text_0, PoisonStatus_Text_1, PoisonStatus_Text_2, PoisonStatus_Text_3, PoisonStatus_Text_4, PoisonStatus_Text_5, PoisonStatus_Text_6, PoisonStatus_Text_7, PoisonStatus_Text_8
# 2399 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 2400 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, PoisonStatus_2
# 2403 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, PoisonStatus_3
# 2406 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, PoisonStatus_4
# 2409 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, PoisonStatus_5
# 2412 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, PoisonStatus_6
# 2415 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, PoisonStatus_7
# 2418 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, PoisonStatus_8
# 2421 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, PoisonStatus_9
# 2424 "data/maps/TypeMastersHouse/scripts.pory"
	case 8, PoisonStatus_10
# 2427 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, PoisonStatus_11
	return

PoisonStatus_2:
# 2401 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_TOXIC
# 2402 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PoisonStatus_3:
# 2404 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_GASTRO_ACID
# 2405 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PoisonStatus_4:
# 2407 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ACID_ARMOR
# 2408 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PoisonStatus_5:
# 2410 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_TOXIC_SPIKES
# 2411 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PoisonStatus_6:
# 2413 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_COIL
# 2414 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PoisonStatus_7:
# 2416 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_VENOM_DRENCH
# 2417 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PoisonStatus_8:
# 2419 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_POISON_POWDER
# 2420 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PoisonStatus_9:
# 2422 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_POISON_GAS
# 2423 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PoisonStatus_10:
# 2425 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_CORROSIVE_GAS
# 2426 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PoisonStatus_11:
# 2428 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


PsychicStatus::
# 2432 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, PsychicStatus_Text_0, PsychicStatus_Text_1, PsychicStatus_Text_2, PsychicStatus_Text_3, PsychicStatus_Text_4, PsychicStatus_Text_5, PsychicStatus_Text_6, PsychicStatus_Text_7, PsychicStatus_Text_8, PsychicStatus_Text_9, PsychicStatus_Text_10, PsychicStatus_Text_11, PsychicStatus_Text_12, PsychicStatus_Text_13, PsychicStatus_Text_14, PsychicStatus_Text_15, PsychicStatus_Text_16, PsychicStatus_Text_17, PsychicStatus_Text_18, PsychicStatus_Text_19, PsychicStatus_Text_20, PsychicStatus_Text_21, PsychicStatus_Text_22, PsychicStatus_Text_23, PsychicStatus_Text_24, PsychicStatus_Text_25, PsychicStatus_Text_26, PsychicStatus_Text_27, PsychicStatus_Text_28, PsychicStatus_Text_29, PsychicStatus_Text_30, PsychicStatus_Text_31, PsychicStatus_Text_32, PsychicStatus_Text_33
# 2434 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 2435 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, PsychicStatus_2
# 2438 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, PsychicStatus_3
# 2441 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, PsychicStatus_4
# 2444 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, PsychicStatus_5
# 2447 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, PsychicStatus_6
# 2450 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, PsychicStatus_7
# 2453 "data/maps/TypeMastersHouse/scripts.pory"
	case 6, PsychicStatus_8
# 2456 "data/maps/TypeMastersHouse/scripts.pory"
	case 7, PsychicStatus_9
# 2459 "data/maps/TypeMastersHouse/scripts.pory"
	case 8, PsychicStatus_10
# 2462 "data/maps/TypeMastersHouse/scripts.pory"
	case 9, PsychicStatus_11
# 2465 "data/maps/TypeMastersHouse/scripts.pory"
	case 10, PsychicStatus_12
# 2468 "data/maps/TypeMastersHouse/scripts.pory"
	case 11, PsychicStatus_13
# 2471 "data/maps/TypeMastersHouse/scripts.pory"
	case 12, PsychicStatus_14
# 2474 "data/maps/TypeMastersHouse/scripts.pory"
	case 13, PsychicStatus_15
# 2477 "data/maps/TypeMastersHouse/scripts.pory"
	case 14, PsychicStatus_16
# 2480 "data/maps/TypeMastersHouse/scripts.pory"
	case 15, PsychicStatus_17
# 2483 "data/maps/TypeMastersHouse/scripts.pory"
	case 16, PsychicStatus_18
# 2486 "data/maps/TypeMastersHouse/scripts.pory"
	case 17, PsychicStatus_19
# 2489 "data/maps/TypeMastersHouse/scripts.pory"
	case 18, PsychicStatus_20
# 2492 "data/maps/TypeMastersHouse/scripts.pory"
	case 19, PsychicStatus_21
# 2495 "data/maps/TypeMastersHouse/scripts.pory"
	case 20, PsychicStatus_22
# 2498 "data/maps/TypeMastersHouse/scripts.pory"
	case 21, PsychicStatus_23
# 2501 "data/maps/TypeMastersHouse/scripts.pory"
	case 22, PsychicStatus_24
# 2504 "data/maps/TypeMastersHouse/scripts.pory"
	case 23, PsychicStatus_25
# 2507 "data/maps/TypeMastersHouse/scripts.pory"
	case 24, PsychicStatus_26
# 2510 "data/maps/TypeMastersHouse/scripts.pory"
	case 25, PsychicStatus_27
# 2513 "data/maps/TypeMastersHouse/scripts.pory"
	case 26, PsychicStatus_28
# 2516 "data/maps/TypeMastersHouse/scripts.pory"
	case 27, PsychicStatus_29
# 2519 "data/maps/TypeMastersHouse/scripts.pory"
	case 28, PsychicStatus_30
# 2522 "data/maps/TypeMastersHouse/scripts.pory"
	case 29, PsychicStatus_31
# 2525 "data/maps/TypeMastersHouse/scripts.pory"
	case 30, PsychicStatus_32
# 2528 "data/maps/TypeMastersHouse/scripts.pory"
	case 31, PsychicStatus_33
# 2531 "data/maps/TypeMastersHouse/scripts.pory"
	case 32, PsychicStatus_34
# 2534 "data/maps/TypeMastersHouse/scripts.pory"
	case 33, PsychicStatus_35
# 2537 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, PsychicStatus_36
	return

PsychicStatus_2:
# 2436 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_REST
# 2437 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_3:
# 2439 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_GRAVITY
# 2440 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_4:
# 2442 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_TRICK_ROOM
# 2443 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_5:
# 2445 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_IMPRISON
# 2446 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_6:
# 2448 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HEALING_WISH
# 2449 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_7:
# 2451 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_POWER_TRICK
# 2452 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_8:
# 2454 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_WONDER_ROOM
# 2455 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_9:
# 2457 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MAGIC_ROOM
# 2458 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_10:
# 2460 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCHIC_TERRAIN
# 2461 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_11:
# 2463 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_TRICK
# 2464 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_12:
# 2466 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCHO_SHIFT
# 2467 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_13:
# 2469 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ROLE_PLAY
# 2470 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_14:
# 2472 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SKILL_SWAP
# 2473 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_15:
# 2475 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_POWER_SWAP
# 2476 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_16:
# 2478 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_GUARD_SWAP
# 2479 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_17:
# 2481 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_GUARD_SPLIT
# 2482 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_18:
# 2484 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_POWER_SPLIT
# 2485 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_19:
# 2487 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HEAL_PULSE
# 2488 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_20:
# 2490 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SPEED_SWAP
# 2491 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_21:
# 2493 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MAGIC_COAT
# 2494 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_22:
# 2496 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ALLY_SWITCH
# 2497 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_23:
# 2499 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HEAL_BLOCK
# 2500 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_24:
# 2502 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_TELEKINESIS
# 2503 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_25:
# 2505 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_TELEPORT
# 2506 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_26:
# 2508 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_BARRIER
# 2509 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_27:
# 2511 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_REFLECT
# 2512 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_28:
# 2514 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_AMNESIA
# 2515 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_29:
# 2517 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_COSMIC_POWER
# 2518 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_30:
# 2520 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_CALM_MIND
# 2521 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_31:
# 2523 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HYPNOSIS
# 2524 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_32:
# 2526 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_AGILITY
# 2527 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_33:
# 2529 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_LIGHT_SCREEN
# 2530 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_34:
# 2532 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MEDITATE
# 2533 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_35:
# 2535 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_MIRACLE_EYE
# 2536 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

PsychicStatus_36:
# 2538 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


RockStatus::
# 2542 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 2543 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, RockStatus_Text_0, RockStatus_Text_1, RockStatus_Text_2, RockStatus_Text_3
# 2544 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 2545 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, RockStatus_2
# 2548 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, RockStatus_3
# 2551 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, RockStatus_4
# 2554 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, RockStatus_5
# 2557 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, RockStatus_6
	return

RockStatus_2:
# 2546 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SANDSTORM
# 2547 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

RockStatus_3:
# 2549 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_WIDE_GUARD
# 2550 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

RockStatus_4:
# 2552 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ROCK_POLISH
# 2553 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

RockStatus_5:
# 2555 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_STEALTH_ROCK
# 2556 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

RockStatus_6:
# 2558 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


SteelStatus::
# 2562 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 2563 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, SteelStatus_Text_0, SteelStatus_Text_1, SteelStatus_Text_2, SteelStatus_Text_3, SteelStatus_Text_4
# 2564 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 2565 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, SteelStatus_2
# 2568 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, SteelStatus_3
# 2571 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, SteelStatus_4
# 2574 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, SteelStatus_5
# 2577 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, SteelStatus_6
# 2580 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, SteelStatus_7
	return

SteelStatus_2:
# 2566 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SHIFT_GEAR
# 2567 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

SteelStatus_3:
# 2569 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_IRON_DEFENSE
# 2570 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

SteelStatus_4:
# 2572 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_AUTOTOMIZE
# 2573 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

SteelStatus_5:
# 2575 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_GEAR_UP
# 2576 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

SteelStatus_6:
# 2578 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_METAL_SOUND
# 2579 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

SteelStatus_7:
# 2581 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


WaterStatus::
# 2585 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox BugPhysical_Text_0
# 2586 "data/maps/TypeMastersHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, FALSE, WaterStatus_Text_0, WaterStatus_Text_1, WaterStatus_Text_2, WaterStatus_Text_3, WaterStatus_Text_4, WaterStatus_Text_5
# 2587 "data/maps/TypeMastersHouse/scripts.pory"
	switch VAR_RESULT
# 2588 "data/maps/TypeMastersHouse/scripts.pory"
	case 0, WaterStatus_2
# 2591 "data/maps/TypeMastersHouse/scripts.pory"
	case 1, WaterStatus_3
# 2594 "data/maps/TypeMastersHouse/scripts.pory"
	case 2, WaterStatus_4
# 2597 "data/maps/TypeMastersHouse/scripts.pory"
	case 3, WaterStatus_5
# 2600 "data/maps/TypeMastersHouse/scripts.pory"
	case 4, WaterStatus_6
# 2603 "data/maps/TypeMastersHouse/scripts.pory"
	case 5, WaterStatus_7
# 2606 "data/maps/TypeMastersHouse/scripts.pory"
	case 127, WaterStatus_8
	return

WaterStatus_2:
# 2589 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_RAIN_DANCE
# 2590 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterStatus_3:
# 2592 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_LIFE_DEW
# 2593 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterStatus_4:
# 2595 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_WATER_SPORT
# 2596 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterStatus_5:
# 2598 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_AQUA_RING
# 2599 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterStatus_6:
# 2601 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SOAK
# 2602 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterStatus_7:
# 2604 "data/maps/TypeMastersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_WITHDRAW
# 2605 "data/maps/TypeMastersHouse/scripts.pory"
	goto TeachTutorMove
	return

WaterStatus_8:
# 2607 "data/maps/TypeMastersHouse/scripts.pory"
	goto TutorRefuse
	return


TutorRefuse::
# 2612 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox TutorRefuse_Text_0
# 2613 "data/maps/TypeMastersHouse/scripts.pory"
	releaseall
	return


TutorExitMoveTeach::
# 2617 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox TutorRefuse_Text_0
# 2618 "data/maps/TypeMastersHouse/scripts.pory"
	releaseall
	return


TutorCantBuy::
# 2622 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox TutorCantBuy_Text_0
# 2623 "data/maps/TypeMastersHouse/scripts.pory"
	releaseall
	return


TeachTutorMove::
# 2627 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox TeachTutorMove_Text_0
# 2628 "data/maps/TypeMastersHouse/scripts.pory"
	special ChooseMonForMoveTutor
# 2629 "data/maps/TypeMastersHouse/scripts.pory"
	waitstate
# 2630 "data/maps/TypeMastersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TutorExitMoveTeach
# 2631 "data/maps/TypeMastersHouse/scripts.pory"
	removemoney 5000
# 2632 "data/maps/TypeMastersHouse/scripts.pory"
	msgbox TeachTutorMove_Text_1
# 2633 "data/maps/TypeMastersHouse/scripts.pory"
	releaseall
	end


MoveMasterInteract_Text_0:
# 32 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Hello there young trainer,\nIm the one they call the move master.\pThis is the control center for the\nmove tutor network.\pFeel free to use the terminals to\naccsess the here aswell.$"

Scientist1Interact_Text_0:
# 39 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Sorry, but im busy connecting other\n regions to the network!$"

Scientist2Interact_Text_0:
# 46 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Working on the systems here takes\na lot of work to keep it running.$"

Scientist3Interact_Text_0:
# 53 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Keeping the systems running all the time\nrequires a whole team to maintane it.$"

Scientist4Interact_Text_0:
# 60 "data/maps/TypeMastersHouse/scripts.pory"
	.string "I am the brains behind this whole\nopperation.\pThe move master use to use TR's to teach\n many moves but with this system he can\ldo it automatically from any of the\lterminals conected to the system.$"

MoveMasterWifeInteract_Text_0:
# 67 "data/maps/TypeMastersHouse/scripts.pory"
	.string "My Husband use to be the one of best at\nteaching nearly every move known in the\lpokemon world.\pHowever his new system means we barely\nsee him now.$"

MoveMasterSonInteract_Text_0:
# 74 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Dad gave me a Clafary as my\nstarter pokemon.\pHe said it could use any move\n with just one.$"

PhysicalSign_Text_0:
# 81 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Physical Moves Tutor$"

SpecialSign_Text_0:
# 88 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Special Moves Tutor$"

StatusSign_Text_0:
# 95 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Status Moves Tutor$"

MovePhysicalTypeSelect_Text_0:
# 104 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Welcome to the Physical Move Counter,\nWhat move type do you want?$"

MovePhysicalTypeSelect_Text_1:
# 105 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Bug$"

MovePhysicalTypeSelect_Text_2:
# 105 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Dark$"

MovePhysicalTypeSelect_Text_3:
# 105 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Dragon$"

MovePhysicalTypeSelect_Text_4:
# 105 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Eletric$"

MovePhysicalTypeSelect_Text_5:
# 105 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Fairy$"

MovePhysicalTypeSelect_Text_6:
# 105 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Fighting$"

MovePhysicalTypeSelect_Text_7:
# 105 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Fire$"

MovePhysicalTypeSelect_Text_8:
# 105 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Flying$"

MovePhysicalTypeSelect_Text_9:
# 105 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Ghost$"

MovePhysicalTypeSelect_Text_10:
# 105 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Grass$"

MovePhysicalTypeSelect_Text_11:
# 105 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Ground$"

MovePhysicalTypeSelect_Text_12:
# 105 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Ice$"

MovePhysicalTypeSelect_Text_13:
# 105 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Normal$"

MovePhysicalTypeSelect_Text_14:
# 105 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Poison$"

MovePhysicalTypeSelect_Text_15:
# 105 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Psychic$"

MovePhysicalTypeSelect_Text_16:
# 105 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Rock$"

MovePhysicalTypeSelect_Text_17:
# 105 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Steel$"

MovePhysicalTypeSelect_Text_18:
# 105 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Water$"

MovePhysicalTypeSelect_Text_19:
# 108 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Bug Type Moves Selected.$"

MovePhysicalTypeSelect_Text_20:
# 111 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Dark Type Moves Selected.$"

MovePhysicalTypeSelect_Text_21:
# 114 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Dragon Type Moves Selected.$"

MovePhysicalTypeSelect_Text_22:
# 117 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Eletric Type Moves Selected.$"

MovePhysicalTypeSelect_Text_23:
# 120 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Fairy Type Moves Selected.$"

MovePhysicalTypeSelect_Text_24:
# 123 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Fighting Type Moves Selected.$"

MovePhysicalTypeSelect_Text_25:
# 126 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Fire Type Moves Selected.$"

MovePhysicalTypeSelect_Text_26:
# 129 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Flying Type Moves Selected.$"

MovePhysicalTypeSelect_Text_27:
# 132 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Ghost Type Moves Selected.$"

MovePhysicalTypeSelect_Text_28:
# 135 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Grass Type Moves Selected.$"

MovePhysicalTypeSelect_Text_29:
# 138 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Ground Type Moves Selected.$"

MovePhysicalTypeSelect_Text_30:
# 141 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Ice Type Moves Selected.$"

MovePhysicalTypeSelect_Text_31:
# 144 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Normal Type Moves Selected.$"

MovePhysicalTypeSelect_Text_32:
# 147 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Poison Type Moves Selected.$"

MovePhysicalTypeSelect_Text_33:
# 150 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Psychic Type Moves Selected.$"

MovePhysicalTypeSelect_Text_34:
# 153 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Rock Type Moves Selected.$"

MovePhysicalTypeSelect_Text_35:
# 156 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Steel Type Moves Selected.$"

MovePhysicalTypeSelect_Text_36:
# 159 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Water Type Moves Selected.$"

MovePhysicalTypeSelect_Text_37:
# 162 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Please Come Back Again!$"

BugPhysical_Text_0:
# 168 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Which move do you want to learn?$"

BugPhysical_Text_1:
# 169 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Pin Missile$"

BugPhysical_Text_2:
# 169 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Twineedle$"

BugPhysical_Text_3:
# 169 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Fury Cutter$"

BugPhysical_Text_4:
# 169 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Pounce$"

BugPhysical_Text_5:
# 169 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Fell Stinger$"

BugPhysical_Text_6:
# 169 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Bug Bite$"

BugPhysical_Text_7:
# 169 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Steamroller$"

BugPhysical_Text_8:
# 169 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Skitter Smack$"

BugPhysical_Text_9:
# 169 "data/maps/TypeMastersHouse/scripts.pory"
	.string "U-Turn$"

BugPhysical_Text_10:
# 169 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Leech Life$"

BugPhysical_Text_11:
# 169 "data/maps/TypeMastersHouse/scripts.pory"
	.string "X-Scissor$"

BugPhysical_Text_12:
# 169 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Lunge$"

BugPhysical_Text_13:
# 169 "data/maps/TypeMastersHouse/scripts.pory"
	.string "First Impression$"

BugPhysical_Text_14:
# 169 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Megahorn$"

DarkPhysical_Text_0:
# 219 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Power Trip$"

DarkPhysical_Text_1:
# 219 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Pursuit$"

DarkPhysical_Text_2:
# 219 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Payback$"

DarkPhysical_Text_3:
# 219 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Assurance$"

DarkPhysical_Text_4:
# 219 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Brutal Swing$"

DarkPhysical_Text_5:
# 219 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Feint Attack$"

DarkPhysical_Text_6:
# 219 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Bite$"

DarkPhysical_Text_7:
# 219 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Thief$"

DarkPhysical_Text_8:
# 219 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Knock Off$"

DarkPhysical_Text_9:
# 219 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Sucker Punch$"

DarkPhysical_Text_10:
# 219 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Night Slash$"

DarkPhysical_Text_11:
# 219 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Lash Out$"

DarkPhysical_Text_12:
# 219 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Jaw Lock$"

DarkPhysical_Text_13:
# 219 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Crunch$"

DarkPhysical_Text_14:
# 219 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Throat Chop$"

DarkPhysical_Text_15:
# 219 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Darkest Lariat$"

DarkPhysical_Text_16:
# 219 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Foul Play$"

DarkPhysical_Text_17:
# 219 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Punishment$"

DarkPhysical_Text_18:
# 219 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Beat Up$"

DarkPhysical_Text_19:
# 219 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Fling$"

DarkPhysical_Text_20:
# 219 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Comeuppance$"

DragonPhysical_Text_0:
# 290 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Scale Shot$"

DragonPhysical_Text_1:
# 290 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Dual Chop$"

DragonPhysical_Text_2:
# 290 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Dragon Tail$"

DragonPhysical_Text_3:
# 290 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Breaking Swipe$"

DragonPhysical_Text_4:
# 290 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Dragon Claw$"

DragonPhysical_Text_5:
# 290 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Dragon Hammer$"

DragonPhysical_Text_6:
# 290 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Dragon Rush$"

DragonPhysical_Text_7:
# 290 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Outrage$"

ElectricPhysical_Text_0:
# 322 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Nuzzle$"

ElectricPhysical_Text_1:
# 322 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Thunder Fang$"

ElectricPhysical_Text_2:
# 322 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Spark$"

ElectricPhysical_Text_3:
# 322 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Thunder Punch$"

ElectricPhysical_Text_4:
# 322 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Wild Charge$"

ElectricPhysical_Text_5:
# 322 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Supercell Slam$"

FairyPhysical_Text_0:
# 348 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Spirit Break$"

FairyPhysical_Text_1:
# 348 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Play Rouch$"

FightingPhysical_Text_0:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Arm Thrust$"

FightingPhysical_Text_1:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Double Kick$"

FightingPhysical_Text_2:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Rock Smash$"

FightingPhysical_Text_3:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Power Up Punch$"

FightingPhysical_Text_4:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Mach Punch$"

FightingPhysical_Text_5:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Karate Chop$"

FightingPhysical_Text_6:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Circle Throw$"

FightingPhysical_Text_7:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Revenge$"

FightingPhysical_Text_8:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Force Palm$"

FightingPhysical_Text_9:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Storm Throw$"

FightingPhysical_Text_10:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Rolling Kick$"

FightingPhysical_Text_11:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Upper Hand$"

FightingPhysical_Text_12:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Low Sweep$"

FightingPhysical_Text_13:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Wake Up Slap$"

FightingPhysical_Text_14:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Vital Throw$"

FightingPhysical_Text_15:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Drain Punch$"

FightingPhysical_Text_16:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Brick Break$"

FightingPhysical_Text_17:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Body Press$"

FightingPhysical_Text_18:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Submission$"

FightingPhysical_Text_19:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Sky Uppercut$"

FightingPhysical_Text_20:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Sacred Sword$"

FightingPhysical_Text_21:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string " Dynamic Punch$"

FightingPhysical_Text_22:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string " Cross Chop$"

FightingPhysical_Text_23:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Hammer Arm$"

FightingPhysical_Text_24:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Jump Kick$"

FightingPhysical_Text_25:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Superpower$"

FightingPhysical_Text_26:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Close Combat$"

FightingPhysical_Text_27:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Axe Kick$"

FightingPhysical_Text_28:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "High Jump Kick$"

FightingPhysical_Text_29:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Focus Punch$"

FightingPhysical_Text_30:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Reversal$"

FightingPhysical_Text_31:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Low Kick$"

FightingPhysical_Text_32:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Counter$"

FightingPhysical_Text_33:
# 362 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Seismic Toss$"

FirePhysical_Text_0:
# 472 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Flame Charge$"

FirePhysical_Text_1:
# 472 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Flame Wheel$"

FirePhysical_Text_2:
# 472 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Fire Fang$"

FirePhysical_Text_3:
# 472 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Temper Flare$"

FirePhysical_Text_4:
# 472 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Fire Punch$"

FirePhysical_Text_5:
# 472 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Fire Lash$"

FirePhysical_Text_6:
# 472 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Blaze Kick$"

FirePhysical_Text_7:
# 472 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Sacred Fire$"

FirePhysical_Text_8:
# 472 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Raging Dury$"

FirePhysical_Text_9:
# 472 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Flare Blitz$"

FirePhysical_Text_10:
# 472 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Heat Crash$"

FlyingPhysical_Text_0:
# 513 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Peck$"

FlyingPhysical_Text_1:
# 513 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Dual Wingbeat$"

FlyingPhysical_Text_2:
# 513 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Acrobatics$"

FlyingPhysical_Text_3:
# 513 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Sky Drop$"

FlyingPhysical_Text_4:
# 513 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Pluck$"

FlyingPhysical_Text_5:
# 513 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Aerial Ace$"

FlyingPhysical_Text_6:
# 513 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Wing Attack$"

FlyingPhysical_Text_7:
# 513 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Drill Peck$"

FlyingPhysical_Text_8:
# 513 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Bounce$"

FlyingPhysical_Text_9:
# 513 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Fly$"

FlyingPhysical_Text_10:
# 513 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Brave Bird$"

FlyingPhysical_Text_11:
# 513 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Sky Attack$"

GhostPhysical_Text_0:
# 557 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Astonish$"

GhostPhysical_Text_1:
# 557 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Lick$"

GhostPhysical_Text_2:
# 557 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Shadow Sneak$"

GhostPhysical_Text_3:
# 557 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Last Respects$"

GhostPhysical_Text_4:
# 557 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Shadow Punch$"

GhostPhysical_Text_5:
# 557 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Shadow Claw$"

GhostPhysical_Text_6:
# 557 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Phantom Force$"

GhostPhysical_Text_7:
# 557 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Poltergeist$"

GrassPhysical_Text_0:
# 589 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Bullet Seed$"

GrassPhysical_Text_1:
# 589 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Leafage$"

GrassPhysical_Text_2:
# 589 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Branch Poke$"

GrassPhysical_Text_3:
# 589 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Vine Whip$"

GrassPhysical_Text_4:
# 589 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Trailblaze$"

GrassPhysical_Text_5:
# 589 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Grassy Glide$"

GrassPhysical_Text_6:
# 589 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Razor Leaf$"

GrassPhysical_Text_7:
# 589 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Needle Arm$"

GrassPhysical_Text_8:
# 589 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Horn Leech$"

GrassPhysical_Text_9:
# 589 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Seed Bomb$"

GrassPhysical_Text_10:
# 589 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Leaf Blade$"

GrassPhysical_Text_11:
# 589 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Petal Blizzard$"

GrassPhysical_Text_12:
# 589 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Power Whip$"

GrassPhysical_Text_13:
# 589 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Wood Hammer$"

GrassPhysical_Text_14:
# 589 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Solar Blade$"

GroundPhysical_Text_0:
# 642 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Bulldoze$"

GroundPhysical_Text_1:
# 642 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Stomping Tantrum$"

GroundPhysical_Text_2:
# 642 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Drill Run$"

GroundPhysical_Text_3:
# 642 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Dig$"

GroundPhysical_Text_4:
# 642 "data/maps/TypeMastersHouse/scripts.pory"
	.string "High Horsepower$"

GroundPhysical_Text_5:
# 642 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Earthquake$"

GroundPhysical_Text_6:
# 642 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Headlong Rush$"

GroundPhysical_Text_7:
# 642 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Magnitude$"

GroundPhysical_Text_8:
# 642 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Fissure$"

IcePhysical_Text_0:
# 677 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Triple Axel$"

IcePhysical_Text_1:
# 677 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Icicle Spear$"

IcePhysical_Text_2:
# 677 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Ice Ball$"

IcePhysical_Text_3:
# 677 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Ice Shard$"

IcePhysical_Text_4:
# 677 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Avalanche$"

IcePhysical_Text_5:
# 677 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Ice Fang$"

IcePhysical_Text_6:
# 677 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Ice Punch$"

IcePhysical_Text_7:
# 677 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Ice Spinner$"

IcePhysical_Text_8:
# 677 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Icicle Crash$"

IcePhysical_Text_9:
# 677 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Ice Hammer$"

NormalPhysical_Text_0:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Constrict$"

NormalPhysical_Text_1:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Double Slap$"

NormalPhysical_Text_2:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Bind$"

NormalPhysical_Text_3:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Fury Attack$"

NormalPhysical_Text_4:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Wrap$"

NormalPhysical_Text_5:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Fury Swipes$"

NormalPhysical_Text_6:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Comet Punch$"

NormalPhysical_Text_7:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Spike Cannon$"

NormalPhysical_Text_8:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Rage$"

NormalPhysical_Text_9:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Tail Slap$"

NormalPhysical_Text_10:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Feint$"

NormalPhysical_Text_11:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Double Hit$"

NormalPhysical_Text_12:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Fake Out$"

NormalPhysical_Text_13:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Pay Day$"

NormalPhysical_Text_14:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Quick Attack$"

NormalPhysical_Text_15:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Pound$"

NormalPhysical_Text_16:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Scratch$"

NormalPhysical_Text_17:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Tackle$"

NormalPhysical_Text_18:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "False Swipe$"

NormalPhysical_Text_19:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Hold Back$"

NormalPhysical_Text_20:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Cut$"

NormalPhysical_Text_21:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Rapid Spin$"

NormalPhysical_Text_22:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Vise Grip$"

NormalPhysical_Text_23:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Covet$"

NormalPhysical_Text_24:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Stomp$"

NormalPhysical_Text_25:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Horn Attack$"

NormalPhysical_Text_26:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Retaliate$"

NormalPhysical_Text_27:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Dizzy Punch$"

NormalPhysical_Text_28:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Smelling Salts$"

NormalPhysical_Text_29:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Headbutt$"

NormalPhysical_Text_30:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Slash$"

NormalPhysical_Text_31:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Facade$"

NormalPhysical_Text_32:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Secret Power$"

NormalPhysical_Text_33:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Chip Away$"

NormalPhysical_Text_34:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Extreme Speed$"

NormalPhysical_Text_35:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Hyper Fang$"

NormalPhysical_Text_36:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Strengh$"

NormalPhysical_Text_37:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Slam$"

NormalPhysical_Text_38:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Mega Punch$"

NormalPhysical_Text_39:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Body Slam$"

NormalPhysical_Text_40:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Take Down$"

NormalPhysical_Text_41:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Rock Climb$"

NormalPhysical_Text_42:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Egg Bomb$"

NormalPhysical_Text_43:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Mega kick$"

NormalPhysical_Text_44:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Thrash$"

NormalPhysical_Text_45:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Double Edge$"

NormalPhysical_Text_46:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Skull Bash$"

NormalPhysical_Text_47:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Last Resort$"

NormalPhysical_Text_48:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Giga Impact$"

NormalPhysical_Text_49:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Self Destruct$"

NormalPhysical_Text_50:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Explosion$"

NormalPhysical_Text_51:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Endeavor$"

NormalPhysical_Text_52:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Super Fang$"

NormalPhysical_Text_53:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Bide$"

NormalPhysical_Text_54:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Present$"

NormalPhysical_Text_55:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Flail$"

NormalPhysical_Text_56:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Natural Gift$"

NormalPhysical_Text_57:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Return$"

NormalPhysical_Text_58:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Frustration$"

NormalPhysical_Text_59:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Guillotine$"

NormalPhysical_Text_60:
# 715 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Horn Drill$"

PoisonPhysical_Text_0:
# 909 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Poison Sting$"

PoisonPhysical_Text_1:
# 909 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Poison Fang$"

PoisonPhysical_Text_2:
# 909 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Poison Tail$"

PoisonPhysical_Text_3:
# 909 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Cross Poison$"

PoisonPhysical_Text_4:
# 909 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Poison Jab$"

PoisonPhysical_Text_5:
# 909 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Gunk Shot$"

PsychicPhysical_Text_0:
# 935 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Heart Stamp$"

PsychicPhysical_Text_1:
# 935 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Psycho Cut$"

PsychicPhysical_Text_2:
# 935 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Zen Headbutt$"

PsychicPhysical_Text_3:
# 935 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Psychic Fangs$"

RockPhysical_Text_0:
# 955 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Rock Blast$"

RockPhysical_Text_1:
# 955 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Rollout$"

RockPhysical_Text_2:
# 955 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Rock Throw$"

RockPhysical_Text_3:
# 955 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Smack Down$"

RockPhysical_Text_4:
# 955 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Rock Tomb$"

RockPhysical_Text_5:
# 955 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Rock Slide$"

RockPhysical_Text_6:
# 955 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Stone Edge$"

RockPhysical_Text_7:
# 955 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Head Smash$"

RockPhysical_Text_8:
# 955 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Rock Wrecker$"

SteelPhysical_Text_0:
# 990 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Bullet Punch$"

SteelPhysical_Text_1:
# 990 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Metal Claw$"

SteelPhysical_Text_2:
# 990 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Magnet Bomb$"

SteelPhysical_Text_3:
# 990 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Smart Strike$"

SteelPhysical_Text_4:
# 990 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Steel Wing$"

SteelPhysical_Text_5:
# 990 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Iron Head$"

SteelPhysical_Text_6:
# 990 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Meteor Mash$"

SteelPhysical_Text_7:
# 990 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Iron Tail$"

SteelPhysical_Text_8:
# 990 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Steel Roller$"

SteelPhysical_Text_9:
# 990 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Gyro Ball$"

SteelPhysical_Text_10:
# 990 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Metal Burst$"

SteelPhysical_Text_11:
# 990 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Heavy Slam$"

SteelPhysical_Text_12:
# 990 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Hard Press$"

WaterPhysical_Text_0:
# 1037 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Clamp$"

WaterPhysical_Text_1:
# 1037 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Aqua Jet$"

WaterPhysical_Text_2:
# 1037 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Flip Turn$"

WaterPhysical_Text_3:
# 1037 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Aqua Cutter$"

WaterPhysical_Text_4:
# 1037 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Razor Shell$"

WaterPhysical_Text_5:
# 1037 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Dive$"

WaterPhysical_Text_6:
# 1037 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Waterfall$"

WaterPhysical_Text_7:
# 1037 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Liquidation$"

WaterPhysical_Text_8:
# 1037 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Aqua Tail$"

WaterPhysical_Text_9:
# 1037 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Crabhammer$"

WaterPhysical_Text_10:
# 1037 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Wave Crash$"

MoveSpecialTypeSelect_Text_0:
# 1083 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Welcome to the Special Move Counter,\nWhat move type do you want?$"

BugSpecial_Text_0:
# 1148 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Infestation$"

BugSpecial_Text_1:
# 1148 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Struggle Bug$"

BugSpecial_Text_2:
# 1148 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Silver Wind$"

BugSpecial_Text_3:
# 1148 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Signal Beam$"

BugSpecial_Text_4:
# 1148 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Bug Buzz$"

BugSpecial_Text_5:
# 1148 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Pollen Puff$"

DarkSpecial_Text_0:
# 1174 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Snarl$"

DarkSpecial_Text_1:
# 1174 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Dark Pulse$"

DarkSpecial_Text_2:
# 1174 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Night Daze$"

DragonSpecial_Text_0:
# 1191 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Twister$"

DragonSpecial_Text_1:
# 1191 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Dragon Breath$"

DragonSpecial_Text_2:
# 1191 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Dragon Pulse$"

DragonSpecial_Text_3:
# 1191 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Draco Meteor$"

DragonSpecial_Text_4:
# 1191 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Dragon Rage$"

ElectricSpecial_Text_0:
# 1214 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Thunder Shock$"

ElectricSpecial_Text_1:
# 1214 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Charge Beam$"

ElectricSpecial_Text_2:
# 1214 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Electroweb$"

ElectricSpecial_Text_3:
# 1214 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Shock Wave$"

ElectricSpecial_Text_4:
# 1214 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Parabolic Charge$"

ElectricSpecial_Text_5:
# 1214 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Volt Switch$"

ElectricSpecial_Text_6:
# 1214 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Rising Voltage$"

ElectricSpecial_Text_7:
# 1214 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Discharge$"

ElectricSpecial_Text_8:
# 1214 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Thunderbolt$"

ElectricSpecial_Text_9:
# 1214 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Thunder$"

ElectricSpecial_Text_10:
# 1214 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Zap Cannon$"

ElectricSpecial_Text_11:
# 1214 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Electro Ball$"

FairySpecial_Text_0:
# 1258 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Disarming Voice$"

FairySpecial_Text_1:
# 1258 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Fairy Wind$"

FairySpecial_Text_2:
# 1258 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Draining Kiss$"

FairySpecial_Text_3:
# 1258 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Dazzling Gleam$"

FairySpecial_Text_4:
# 1258 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Alluring Voice$"

FairySpecial_Text_5:
# 1258 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Moonblast$"

FairySpecial_Text_6:
# 1258 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Misty Explosion$"

FightingSpecial_Text_0:
# 1287 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Vacuum Wave$"

FightingSpecial_Text_1:
# 1287 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Aura Sphere$"

FightingSpecial_Text_2:
# 1287 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Focus Blast$"

FightingSpecial_Text_3:
# 1287 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Final Gambit$"

FireSpecial_Text_0:
# 1307 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Fire Spin$"

FireSpecial_Text_1:
# 1307 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Ember$"

FireSpecial_Text_2:
# 1307 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Incinerate$"

FireSpecial_Text_3:
# 1307 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Burning Jealousy$"

FireSpecial_Text_4:
# 1307 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Flame Burst$"

FireSpecial_Text_5:
# 1307 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Mystical Fire$"

FireSpecial_Text_6:
# 1307 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Fire Pledge$"

FireSpecial_Text_7:
# 1307 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Lava Plume$"

FireSpecial_Text_8:
# 1307 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Flamethrower$"

FireSpecial_Text_9:
# 1307 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Heat Wave$"

FireSpecial_Text_10:
# 1307 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Inferno$"

FireSpecial_Text_11:
# 1307 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Fire Blast$"

FireSpecial_Text_12:
# 1307 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Overheat$"

FireSpecial_Text_13:
# 1307 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Burn Up$"

FireSpecial_Text_14:
# 1307 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Blast Burn$"

FireSpecial_Text_15:
# 1307 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Eruption$"

FlyingSpecial_Text_0:
# 1363 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Gust$"

FlyingSpecial_Text_1:
# 1363 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Air Cutter$"

FlyingSpecial_Text_2:
# 1363 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Air Slash$"

FlyingSpecial_Text_3:
# 1363 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Hurricane$"

GhostSpecial_Text_0:
# 1383 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Ominous Wind$"

GhostSpecial_Text_1:
# 1383 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Hex$"

GhostSpecial_Text_2:
# 1383 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Shadow Ball$"

GhostSpecial_Text_3:
# 1383 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Night Shade$"

GrassSpecial_Text_0:
# 1403 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Absorb$"

GrassSpecial_Text_1:
# 1403 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Mega Drain$"

GrassSpecial_Text_2:
# 1403 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Magical Leaf$"

GrassSpecial_Text_3:
# 1403 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Leaf Tornado$"

GrassSpecial_Text_4:
# 1403 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Giga Drain$"

GrassSpecial_Text_5:
# 1403 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Grass Pledge$"

GrassSpecial_Text_6:
# 1403 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Energy Ball$"

GrassSpecial_Text_7:
# 1403 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Solar Beam$"

GrassSpecial_Text_8:
# 1403 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Petal Dance$"

GrassSpecial_Text_9:
# 1403 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Leaf Storm$"

GrassSpecial_Text_10:
# 1403 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Frenzy Plant$"

GrassSpecial_Text_11:
# 1403 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Grass Knot$"

GroundSpecial_Text_0:
# 1447 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Mud Slap$"

GroundSpecial_Text_1:
# 1447 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Mud Shot$"

GroundSpecial_Text_2:
# 1447 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Mud Bomb$"

GroundSpecial_Text_3:
# 1447 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Scorching Sands$"

GroundSpecial_Text_4:
# 1447 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Earth Power$"

IceSpecial_Text_0:
# 1470 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Powder Snow$"

IceSpecial_Text_1:
# 1470 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Icy Wind$"

IceSpecial_Text_2:
# 1470 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Frost Breath$"

IceSpecial_Text_3:
# 1470 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Aroura Beam$"

IceSpecial_Text_4:
# 1470 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Freeze Dry$"

IceSpecial_Text_5:
# 1470 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Ice Beam$"

IceSpecial_Text_6:
# 1470 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Blizzard$"

IceSpecial_Text_7:
# 1470 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Sheer Cold$"

NormalSpecial_Text_0:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Revival Blessing$"

NormalSpecial_Text_1:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Recover$"

NormalSpecial_Text_2:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Soft-Boiled$"

NormalSpecial_Text_3:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Perish Song$"

NormalSpecial_Text_4:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Heal Bell$"

NormalSpecial_Text_5:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Morning Sun$"

NormalSpecial_Text_6:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Slack Off$"

NormalSpecial_Text_7:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Encore$"

NormalSpecial_Text_8:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Mind Reader$"

NormalSpecial_Text_9:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Lock-On$"

NormalSpecial_Text_10:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Mean Look$"

NormalSpecial_Text_11:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Block$"

NormalSpecial_Text_12:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Minimize$"

NormalSpecial_Text_13:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Metronome$"

NormalSpecial_Text_14:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Substitute$"

NormalSpecial_Text_15:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Protect$"

NormalSpecial_Text_16:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Belly Drum$"

NormalSpecial_Text_17:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Endure$"

NormalSpecial_Text_18:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Sleep Talk$"

NormalSpecial_Text_19:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Swallow$"

NormalSpecial_Text_20:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Wish$"

NormalSpecial_Text_21:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Recycle$"

NormalSpecial_Text_22:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Stuff Cheeks$"

NormalSpecial_Text_23:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Power Shift$"

NormalSpecial_Text_24:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Shed Tail$"

NormalSpecial_Text_25:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Tidy Up$"

NormalSpecial_Text_26:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Scary Face$"

NormalSpecial_Text_27:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Mimic$"

NormalSpecial_Text_28:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Psych Up$"

NormalSpecial_Text_29:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Yawn$"

NormalSpecial_Text_30:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Double Team$"

NormalSpecial_Text_31:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Shell Smash$"

NormalSpecial_Text_32:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Spotlight$"

NormalSpecial_Text_33:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Sing$"

NormalSpecial_Text_34:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Swagger$"

NormalSpecial_Text_35:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Attract$"

NormalSpecial_Text_36:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Simple Beam$"

NormalSpecial_Text_37:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Entrainment$"

NormalSpecial_Text_38:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "After You$"

NormalSpecial_Text_39:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Reflect Type$"

NormalSpecial_Text_40:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Bestow$"

NormalSpecial_Text_41:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Swords Dance$"

NormalSpecial_Text_42:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Growth$"

NormalSpecial_Text_43:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Stockpile$"

NormalSpecial_Text_44:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Follow Me$"

NormalSpecial_Text_45:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Nature Power$"

NormalSpecial_Text_46:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Helping Hand$"

NormalSpecial_Text_47:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Assist$"

NormalSpecial_Text_48:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Refresh$"

NormalSpecial_Text_49:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Comouflage$"

NormalSpecial_Text_50:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Copycat$"

NormalSpecial_Text_51:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Tearful Look$"

NormalSpecial_Text_52:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Supersonic$"

NormalSpecial_Text_53:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Disable$"

NormalSpecial_Text_54:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Smokescreen$"

NormalSpecial_Text_55:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Flash$"

NormalSpecial_Text_56:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Sweet Scent$"

NormalSpecial_Text_57:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Teeter Dance$"

NormalSpecial_Text_58:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Tickle$"

NormalSpecial_Text_59:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Captivate$"

NormalSpecial_Text_60:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Whirlwind$"

NormalSpecial_Text_61:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Roar$"

NormalSpecial_Text_62:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Pain Split$"

NormalSpecial_Text_63:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Me First$"

NormalSpecial_Text_64:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Play Nice$"

NormalSpecial_Text_65:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Confide$"

NormalSpecial_Text_66:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Safeguard$"

NormalSpecial_Text_67:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Harden$"

NormalSpecial_Text_68:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Focuse Energy$"

NormalSpecial_Text_69:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Sharpen$"

NormalSpecial_Text_70:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Acupressure$"

NormalSpecial_Text_71:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Lucky Chant$"

NormalSpecial_Text_72:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Work Up$"

NormalSpecial_Text_73:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Happy Hour$"

NormalSpecial_Text_74:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Laser Focus$"

NormalSpecial_Text_75:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Tail Whip$"

NormalSpecial_Text_76:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Leer$"

NormalSpecial_Text_77:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Glare$"

NormalSpecial_Text_78:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Noble Roar$"

NormalSpecial_Text_79:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Defence Curl$"

NormalSpecial_Text_80:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Splash$"

NormalSpecial_Text_81:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Baton Pass$"

NormalSpecial_Text_82:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Howl$"

NormalSpecial_Text_83:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Celebrate$"

NormalSpecial_Text_84:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Hold Hands$"

NormalSpecial_Text_85:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Screech$"

NormalSpecial_Text_86:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Growl$"

NormalSpecial_Text_87:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Foresight$"

NormalSpecial_Text_88:
# 1502 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Oder Sleuth$"

PoisonSpecial_Text_0:
# 1774 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Smog$"

PoisonSpecial_Text_1:
# 1774 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Acid Spray$"

PoisonSpecial_Text_2:
# 1774 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Acid$"

PoisonSpecial_Text_3:
# 1774 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Clear Smog$"

PoisonSpecial_Text_4:
# 1774 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Venoshock$"

PoisonSpecial_Text_5:
# 1774 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Sludge$"

PoisonSpecial_Text_6:
# 1774 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Sludge Bomb$"

PoisonSpecial_Text_7:
# 1774 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Belch$"

PsychicSpecial_Text_0:
# 1809 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Stored Power$"

PsychicSpecial_Text_1:
# 1809 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Confusion$"

PsychicSpecial_Text_2:
# 1809 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Psybeam$"

PsychicSpecial_Text_3:
# 1809 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Psychic Noise$"

PsychicSpecial_Text_4:
# 1809 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Psyshock$"

PsychicSpecial_Text_5:
# 1809 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Expanding Force$"

PsychicSpecial_Text_6:
# 1809 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Extrasensory$"

PsychicSpecial_Text_7:
# 1809 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Dream Eater$"

PsychicSpecial_Text_8:
# 1809 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Future Sight$"

PsychicSpecial_Text_9:
# 1809 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Synchronoise$"

PsychicSpecial_Text_10:
# 1809 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Psywave$"

PsychicSpecial_Text_11:
# 1809 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Mirror Coat$"

RockSpecial_Text_0:
# 1856 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Ancient Power$"

RockSpecial_Text_1:
# 1856 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Power Gem$"

RockSpecial_Text_2:
# 1856 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Meteor Beam$"

SteelSpecial_Text_0:
# 1873 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Mirror Shot$"

SteelSpecial_Text_1:
# 1873 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Flash Cannon$"

SteelSpecial_Text_2:
# 1873 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Steel Beam$"

WaterSpecial_Text_0:
# 1890 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Water Shuriken$"

WaterSpecial_Text_1:
# 1890 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Whirlpool$"

WaterSpecial_Text_2:
# 1890 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Water Gun$"

WaterSpecial_Text_3:
# 1890 "data/maps/TypeMastersHouse/scripts.pory"
	.string " Bubble$"

WaterSpecial_Text_4:
# 1890 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Chilling Water$"

WaterSpecial_Text_5:
# 1890 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Water Pulse$"

WaterSpecial_Text_6:
# 1890 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Octazooka$"

WaterSpecial_Text_7:
# 1890 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Brine$"

WaterSpecial_Text_8:
# 1890 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Bubble Beam$"

WaterSpecial_Text_9:
# 1890 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Water Pledge$"

WaterSpecial_Text_10:
# 1890 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Scald$"

WaterSpecial_Text_11:
# 1890 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Muddy Water$"

WaterSpecial_Text_12:
# 1890 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Surf$"

WaterSpecial_Text_13:
# 1890 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Hydro Pump$"

WaterSpecial_Text_14:
# 1890 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Hydro Cannon$"

WaterSpecial_Text_15:
# 1890 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Water Spout$"

MoveStatusTypeSelect_Text_0:
# 1950 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Welcome to the Status Move Counter,\nWhat move type do you want?$"

BugStatus_Text_0:
# 2015 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Spider Web$"

BugStatus_Text_1:
# 2015 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Tail Glow$"

BugStatus_Text_2:
# 2015 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Rage Powder$"

BugStatus_Text_3:
# 2015 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Quiver Dance$"

BugStatus_Text_4:
# 2015 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Sticky Web$"

BugStatus_Text_5:
# 2015 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Powder$"

BugStatus_Text_6:
# 2015 "data/maps/TypeMastersHouse/scripts.pory"
	.string "String Shot$"

DarkStatus_Text_0:
# 2044 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Snatch$"

DarkStatus_Text_1:
# 2044 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Memento$"

DarkStatus_Text_2:
# 2044 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Switcheroo$"

DarkStatus_Text_3:
# 2044 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Hone Claws$"

DarkStatus_Text_4:
# 2044 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Torment$"

DarkStatus_Text_5:
# 2044 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Flatter$"

DarkStatus_Text_6:
# 2044 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Embargo$"

DarkStatus_Text_7:
# 2044 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Quash$"

DarkStatus_Text_8:
# 2044 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Nasty Plot$"

DarkStatus_Text_9:
# 2044 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Taunt$"

DarkStatus_Text_10:
# 2044 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Fake Tears$"

DarkStatus_Text_11:
# 2044 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Parting Shot$"

DragonStatus_Text_0:
# 2088 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Dragon Cheer$"

DragonStatus_Text_1:
# 2088 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Dragon Dance$"

ElectricStatus_Text_0:
# 2102 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Magnet Rise$"

ElectricStatus_Text_1:
# 2102 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Electric Terrain$"

ElectricStatus_Text_2:
# 2102 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Eerie Impulse$"

ElectricStatus_Text_3:
# 2102 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Charge$"

ElectricStatus_Text_4:
# 2102 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Magnetic Flux$"

ElectricStatus_Text_5:
# 2102 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Thunder Wave$"

ElectricStatus_Text_6:
# 2102 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Electrify$"

ElectricStatus_Text_7:
# 2102 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Ion Deluge$"

FairyStatus_Text_0:
# 2134 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Moonlight$"

FairyStatus_Text_1:
# 2134 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Crafty Shield$"

FairyStatus_Text_2:
# 2134 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Flower Shield$"

FairyStatus_Text_3:
# 2134 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Misty Terrain$"

FairyStatus_Text_4:
# 2134 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Sweet Kiss$"

FairyStatus_Text_5:
# 2134 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Aromatic Mist$"

FairyStatus_Text_6:
# 2134 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Charm$"

FairyStatus_Text_7:
# 2134 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Baby Doll Eyes$"

FightingStatus_Text_0:
# 2166 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Detect$"

FightingStatus_Text_1:
# 2166 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Mat Block$"

FightingStatus_Text_2:
# 2166 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Coaching$"

FightingStatus_Text_3:
# 2166 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Quick Guard$"

FightingStatus_Text_4:
# 2166 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Bulk Up$"

FireStatus_Text_0:
# 2189 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Sunny Day$"

FireStatus_Text_1:
# 2189 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Will-O Wisp$"

FlyingStatus_Text_0:
# 2203 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Roost$"

FlyingStatus_Text_1:
# 2203 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Tailwind$"

FlyingStatus_Text_2:
# 2203 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Feather Dance$"

FlyingStatus_Text_3:
# 2203 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Defog$"

FlyingStatus_Text_4:
# 2203 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Mirror Move$"

GhostStatus_Text_0:
# 2226 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Destiny Bond$"

GhostStatus_Text_1:
# 2226 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Grudge$"

GhostStatus_Text_2:
# 2226 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Curse$"

GhostStatus_Text_3:
# 2226 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Confuse Ray$"

GhostStatus_Text_4:
# 2226 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Spite$"

GhostStatus_Text_5:
# 2226 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Nightmare$"

GrassStatus_Text_0:
# 2252 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Synthesis$"

GrassStatus_Text_1:
# 2252 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Aromatherapy$"

GrassStatus_Text_2:
# 2252 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Cotton Guard$"

GrassStatus_Text_3:
# 2252 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Grassy Terrain$"

GrassStatus_Text_4:
# 2252 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Spiky Shield$"

GrassStatus_Text_5:
# 2252 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Leech Seed$"

GrassStatus_Text_6:
# 2252 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Worry Seed$"

GrassStatus_Text_7:
# 2252 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Strengh Sap$"

GrassStatus_Text_8:
# 2252 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Grass Whistle$"

GrassStatus_Text_9:
# 2252 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Sleep Power$"

GrassStatus_Text_10:
# 2252 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Spore$"

GrassStatus_Text_11:
# 2252 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Ingrain$"

GrassStatus_Text_12:
# 2252 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Stun Spore$"

GrassStatus_Text_13:
# 2252 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Cotton Spore$"

GroundStatus_Text_0:
# 2302 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Rototiller$"

GroundStatus_Text_1:
# 2302 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Mud Sport$"

GroundStatus_Text_2:
# 2302 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Sand Attack$"

GroundStatus_Text_3:
# 2302 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Spikes$"

IceStatus_Text_0:
# 2322 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Hail$"

IceStatus_Text_1:
# 2322 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Aurora Veil$"

IceStatus_Text_2:
# 2322 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Mist$"

IceStatus_Text_3:
# 2322 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Haze$"

PoisonStatus_Text_0:
# 2398 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Toxic$"

PoisonStatus_Text_1:
# 2398 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Gastro Acid$"

PoisonStatus_Text_2:
# 2398 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Acid Armor$"

PoisonStatus_Text_3:
# 2398 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Toxic Spikes$"

PoisonStatus_Text_4:
# 2398 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Coil$"

PoisonStatus_Text_5:
# 2398 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Venom Drench$"

PoisonStatus_Text_6:
# 2398 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Poison Powder$"

PoisonStatus_Text_7:
# 2398 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Poison Gas$"

PoisonStatus_Text_8:
# 2398 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Corrosive Gas$"

PsychicStatus_Text_0:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Rest$"

PsychicStatus_Text_1:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Gravity$"

PsychicStatus_Text_2:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Trick Room$"

PsychicStatus_Text_3:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Imprison$"

PsychicStatus_Text_4:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Healing Wish$"

PsychicStatus_Text_5:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Power Trick$"

PsychicStatus_Text_6:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Wonder Room$"

PsychicStatus_Text_7:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Magic Room$"

PsychicStatus_Text_8:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Psychic Terrain$"

PsychicStatus_Text_9:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Trick$"

PsychicStatus_Text_10:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Psycho Shift$"

PsychicStatus_Text_11:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Role Play$"

PsychicStatus_Text_12:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Skill Swap$"

PsychicStatus_Text_13:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Power Swap$"

PsychicStatus_Text_14:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Guard Swap$"

PsychicStatus_Text_15:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Guard Split$"

PsychicStatus_Text_16:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Power Split$"

PsychicStatus_Text_17:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Heal Pulse$"

PsychicStatus_Text_18:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Speed Swap$"

PsychicStatus_Text_19:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Magic Coat$"

PsychicStatus_Text_20:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Ally Switch$"

PsychicStatus_Text_21:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Heal Block$"

PsychicStatus_Text_22:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Telekinesis$"

PsychicStatus_Text_23:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Teleport$"

PsychicStatus_Text_24:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Barrier$"

PsychicStatus_Text_25:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Reflect$"

PsychicStatus_Text_26:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Amnesia$"

PsychicStatus_Text_27:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Cosmic Power$"

PsychicStatus_Text_28:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Calm Mind$"

PsychicStatus_Text_29:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Hypnosis$"

PsychicStatus_Text_30:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Agility$"

PsychicStatus_Text_31:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Light Screen$"

PsychicStatus_Text_32:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Meditate$"

PsychicStatus_Text_33:
# 2433 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Miracle Eye$"

RockStatus_Text_0:
# 2543 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Sandstorm$"

RockStatus_Text_1:
# 2543 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Wide Guard$"

RockStatus_Text_2:
# 2543 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Rock Polish$"

RockStatus_Text_3:
# 2543 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Stealth Rock$"

SteelStatus_Text_0:
# 2563 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Shift Gear$"

SteelStatus_Text_1:
# 2563 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Iron Defence$"

SteelStatus_Text_2:
# 2563 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Autotomize$"

SteelStatus_Text_3:
# 2563 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Gear Up$"

SteelStatus_Text_4:
# 2563 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Metal Sound$"

WaterStatus_Text_0:
# 2586 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Rain Dance$"

WaterStatus_Text_1:
# 2586 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Life Dew$"

WaterStatus_Text_2:
# 2586 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Water Sport$"

WaterStatus_Text_3:
# 2586 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Aqua Ring$"

WaterStatus_Text_4:
# 2586 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Soak$"

WaterStatus_Text_5:
# 2586 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Withdraw$"

TutorRefuse_Text_0:
# 2612 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Come back if you change your mind.$"

TutorCantBuy_Text_0:
# 2622 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Sorry, You dont have enought money!$"

TeachTutorMove_Text_0:
# 2627 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Who to teach move to?$"

TeachTutorMove_Text_1:
# 2632 "data/maps/TypeMastersHouse/scripts.pory"
	.string "Thankyou, come back soon!$"
