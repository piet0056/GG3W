#pragma once

// This header includes all files inside the framework project.
// It is meant for use by game projects ONLY.
// As new files are created, include them here so the game has easy access to them.
// It should not be included by any files inside the framework project.

#include "CoreHeaders.h"

#include "../Libraries/imgui/imgui.h"

#include "FWCore.h"
#include "GameCore.h"
#include "Events/Event.h"
#include "Events/EventManager.h"
#include "Math/Random.h"
#include "Math/Vector.h"
#include "Objects/Camera.h"
#include "Objects/GameObject.h"
#include "Objects/Mesh.h"
#include "Objects/ShaderProgram.h"
#include "Objects/SpriteSheet.h"
#include "Objects/Texture.h"
#include "UI/ImGuiManager.h"
#include "Utility/Utility.h"
