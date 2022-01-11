#pragma once

#include "Math/Vector.h"

namespace fw {

enum class DeviceType { Keyboard, Mouse };
enum class InputState { Pressed, Released };

//===============================================
// Event class
//===============================================
class Event
{
public:
    Event() {}
    virtual ~Event() {}

    // Event Type Getters.
    virtual const char* GetEventType() = 0;
};

//===============================================
// InputEvent class
//===============================================
class InputEvent : public Event
{
public:
    InputEvent(DeviceType deviceType, InputState inputState, int keyCode)
        : m_DeviceType( deviceType )
        , m_InputState( inputState )
        , m_ID( keyCode )
    {
    }

    // Event Type Getters.
    static const char* GetStaticEventType() { return "InputEvent"; }
    virtual const char* GetEventType() override { return GetStaticEventType(); }

    // Getters.
    DeviceType GetDeviceType() { return m_DeviceType; }
    InputState GetInputState() { return m_InputState; }
    int GetID() { return m_ID; }
    vec2 GetPosition() { return m_Pos; }

protected:
    DeviceType m_DeviceType;
    InputState m_InputState;
    int m_ID;
    vec2 m_Pos;
};

} // namespace fw
