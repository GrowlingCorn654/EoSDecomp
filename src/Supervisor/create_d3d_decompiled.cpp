
bool Supervisor::create_d3d(void)

{
  bool result;
  
  supervisor.d3d = Direct3DCreate8();
  result = supervisor.d3d == (IDirect3D8 *)0x0;
  if (result) {
    LogBuffer::write_error
              (&LogBuffer,"Direct3D �I�u�W�F�N�g�͉��̂��쐬�o���Ȃ�����\n");
  }
  return result;
}

