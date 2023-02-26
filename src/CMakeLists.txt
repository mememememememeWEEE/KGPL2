cmake_minimum_required (VERSION 3.8)

project (KGPL)

add_library (KGPL 
	"KGPL.h"

	"KGPL_window.h"
	"KGPL_window.cpp"

	"KGPL_event.h" 
	"KGPL_application.h"
)