
bool get_joypad_capabilities(void)

{
  MMRESULT joyposEx;
  joyinfoex_tag joystick;
  
  joystick.dwSize = 0x34;
  joystick.dwFlags = 0xff;
  joyposEx = joyGetPosEx(0,&joystick);
  if (joyposEx == 0) {
    joyGetDevCapsA(0,&JOYPAD_CAPS__wMid_,0x194);
  }
  else {
    LogBuffer::write(&LogBuffer,"�g����p�b�h��??�݂��Ȃ��悤�ł��A�c�O\n");
  }
  return joyposEx != 0;
}

