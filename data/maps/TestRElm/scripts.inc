TestRElm_MapScripts::
	.byte 0


DragonMoveTutor::
	lock
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, DragonMoveTutor_Text_0, DragonMoveTutor_Text_1, DragonMoveTutor_Text_2
	switch VAR_RESULT
	case 0, DragonMoveTutor_3
	case 1, DragonMoveTutor_4
	case 2, DragonMoveTutor_5
	case 127, DragonMoveTutor_6
DragonMoveTutor_1:
	releaseall
	return

DragonMoveTutor_3:
	msgbox DragonMoveTutor_Text_3
	goto DragonPhysical
	goto DragonMoveTutor_1

DragonMoveTutor_4:
	msgbox DragonMoveTutor_Text_4
	goto DragonSpecial
	goto DragonMoveTutor_1

DragonMoveTutor_5:
	msgbox DragonMoveTutor_Text_5
	goto DragonStatus
	goto DragonMoveTutor_1

DragonMoveTutor_6:
	msgbox DragonMoveTutor_Text_6
	goto DragonMoveTutor_1


DragonPhysical::
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, DragonPhysical_Text_0, DragonPhysical_Text_1, DragonPhysical_Text_2, DragonPhysical_Text_3, DragonPhysical_Text_4, DragonPhysical_Text_5, DragonPhysical_Text_6
	switch VAR_RESULT
	case 0, DragonPhysical_3
	case 1, DragonPhysical_4
	case 2, DragonPhysical_5
	case 3, DragonPhysical_6
	case 4, DragonPhysical_7
	case 5, DragonPhysical_8
	case 6, DragonPhysical_9
	case 127, DragonPhysical_10
DragonPhysical_1:
	releaseall
	return

DragonPhysical_3:
	setvar VAR_0x8005, MOVE_SCALE_SHOT
	goto TeachMonMove
	goto DragonPhysical_1

DragonPhysical_4:
	setvar VAR_0x8005, MOVE_DUAL_CHOP
	goto TeachMonMove
	goto DragonPhysical_1

DragonPhysical_5:
	setvar VAR_0x8005, MOVE_DRAGON_TAIL
	goto TeachMonMove
	goto DragonPhysical_1

DragonPhysical_6:
	setvar VAR_0x8005, MOVE_BREAKING_SWIPE
	goto TeachMonMove
	goto DragonPhysical_1

DragonPhysical_7:
	setvar VAR_0x8005, MOVE_DRAGON_CLAW
	goto TeachMonMove
	goto DragonPhysical_1

DragonPhysical_8:
	setvar VAR_0x8005, MOVE_DRAGON_RUSH
	goto TeachMonMove
	goto DragonPhysical_1

DragonPhysical_9:
	setvar VAR_0x8005, MOVE_OUTRAGE
	goto TeachMonMove
	goto DragonPhysical_1

DragonPhysical_10:
	end


DragonSpecial::
	end


DragonStatus::
	end


TeachMonMove::
	msgbox TeachMonMove_Text_0
	special ChooseMonForMoveTutor
	waitstate
	releaseall
	end


DragonMoveTutor_Text_0:
	.string "Physical$"

DragonMoveTutor_Text_1:
	.string "Special$"

DragonMoveTutor_Text_2:
	.string "Status$"

DragonMoveTutor_Text_3:
	.string "Dragon Physical$"

DragonMoveTutor_Text_4:
	.string "Dragon Special$"

DragonMoveTutor_Text_5:
	.string "Dragon Status$"

DragonMoveTutor_Text_6:
	.string "Come back soon$"

DragonPhysical_Text_0:
	.string "Scale Shot$"

DragonPhysical_Text_1:
	.string "Dual Chop$"

DragonPhysical_Text_2:
	.string "Dragon Tail$"

DragonPhysical_Text_3:
	.string "Breaking Swipe$"

DragonPhysical_Text_4:
	.string "Dragon Claw$"

DragonPhysical_Text_5:
	.string "Dragon Rush$"

DragonPhysical_Text_6:
	.string "Outrage$"

TeachMonMove_Text_0:
	.string "who to teach move to?$"
