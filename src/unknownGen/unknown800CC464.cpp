#include <unknownGen.h>
#include <meta/igDefaultInterfaceManager.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
class UnknownGenV800CC58C_0 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10();
 virtual void s14();
 virtual void s18();
 virtual void s1C();
 virtual void s20();
 virtual void s24();
 virtual void s28();
 virtual void s2C();
 virtual void s30();
 virtual void s34();
 virtual void s38();
 virtual void s3C();
 virtual void s40();
 virtual void s44();
 virtual void s48();
 virtual void s4C();
 virtual void s50();
 virtual void s54();
 virtual void s58();
 virtual void s5C();
 virtual void s60();
 virtual void s64();
 virtual void * s68();
};
extern "C" {
void igDefaultInterfaceManager_virtual68(int p0,int p1,int p2){
 if(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_mouseMotionFunction){
  reinterpret_cast<void (*)(void *,void *,void *)>(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_mouseMotionFunction)((void *)p1,(void *)p2,(void *)p2);
  return;
 } else {
  return;
 }
}
void igDefaultInterfaceManager_virtual6C(int p0,int p1,int p2,int p3){
 if(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_mouseButtonDownFunction){
  reinterpret_cast<void (*)(void *,void *,void *,void *)>(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_mouseButtonDownFunction)((void *)p1,(void *)p2,(void *)p3,(void *)p3);
  return;
 } else {
  return;
 }
}
void igDefaultInterfaceManager_virtual70(int p0,int p1,int p2,int p3){
 if(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_mouseButtonUpFunction){
  reinterpret_cast<void (*)(void *,void *,void *,void *)>(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_mouseButtonUpFunction)((void *)p1,(void *)p2,(void *)p3,(void *)p3);
  return;
 } else {
  return;
 }
}
void igDefaultInterfaceManager_virtual74(int p0,int p1,int p2,int p3){
 if(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_windowMoveFunction){
  reinterpret_cast<void (*)(void *,void *,void *,void *)>(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_windowMoveFunction)((void *)p1,(void *)p2,(void *)p3,(void *)p3);
  return;
 } else {
  return;
 }
}
void igDefaultInterfaceManager_virtual78(int p0,int p1,int p2,int p3){
 if(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_windowResizeFunction){
  reinterpret_cast<void (*)(void *,void *,void *,void *)>(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_windowResizeFunction)((void *)p1,(void *)p2,(void *)p3,(void *)p3);
  return;
 } else {
  return;
 }
}
void *igDefaultInterfaceManager_virtual7C(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 value0=(void *)1;
 if(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_windowCloseFunction){
  value1=reinterpret_cast<void * (*)(void *,void *)>(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_windowCloseFunction)((void *)p1,(void *)p1);
  value0=value1;
 }
 if((unsigned char)(int)value0){
  value2=reinterpret_cast<UnknownGenV800CC58C_0 *>((void *)p1)->s68();
  return value2;
 } else {
  return value0;
 }
}
void igDefaultInterfaceManager_virtualA0(int p0,int p1,int p2){
 if(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_keyDownFunction){
  reinterpret_cast<void (*)(void *,void *,void *)>(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_keyDownFunction)((void *)p1,(void *)p2,(void *)p2);
  return;
 } else {
  return;
 }
}
void igDefaultInterfaceManager_virtualA4(int p0,int p1,int p2){
 if(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_keyUpFunction){
  reinterpret_cast<void (*)(void *,void *,void *)>(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_keyUpFunction)((void *)p1,(void *)p2,(void *)p2);
  return;
 } else {
  return;
 }
}
void igDefaultInterfaceManager_virtual80(int p0,int p1,int p2,int p3){
 if(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_controllerJoystickMotionFunction){
  reinterpret_cast<void (*)(void *,void *,void *,void *)>(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_controllerJoystickMotionFunction)((void *)p1,(void *)p2,(void *)p3,(void *)p3);
  return;
 } else {
  return;
 }
}
void igDefaultInterfaceManager_virtual84(int p0,int p1,int p2,int p3){
 if(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_controllerButtonDownFunction){
  reinterpret_cast<void (*)(void *,void *,void *,void *)>(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_controllerButtonDownFunction)((void *)p1,(void *)p2,(void *)p3,(void *)p3);
  return;
 } else {
  return;
 }
}
void igDefaultInterfaceManager_virtual88(int p0,int p1,int p2,int p3){
 if(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_controllerButtonUpFunction){
  reinterpret_cast<void (*)(void *,void *,void *,void *)>(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_controllerButtonUpFunction)((void *)p1,(void *)p2,(void *)p3,(void *)p3);
  return;
 } else {
  return;
 }
}
void igDefaultInterfaceManager_virtual8C(int p0,int p1,int p2,int p3){
 if(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_controllerButtonPressureFunction){
  reinterpret_cast<void (*)(void *,void *,void *,void *)>(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_controllerButtonPressureFunction)((void *)p1,(void *)p2,(void *)p3,(void *)p3);
  return;
 } else {
  return;
 }
}
void igDefaultInterfaceManager_virtual90(int p0,int p1,int p2){
 if(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_controllerConnectionFunction){
  reinterpret_cast<void (*)(void *,void *,void *)>(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_controllerConnectionFunction)((void *)p1,(void *)p2,(void *)p2);
  return;
 } else {
  return;
 }
}
void igDefaultInterfaceManager_virtual94(int p0,int p1,int p2){
 if(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_controllerDisconnectionFunction){
  reinterpret_cast<void (*)(void *,void *,void *)>(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_controllerDisconnectionFunction)((void *)p1,(void *)p2,(void *)p2);
  return;
 } else {
  return;
 }
}
void igDefaultInterfaceManager_virtual98(int p0,int p1,int p2,int p3){
 if(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_controllerSliderFunction){
  reinterpret_cast<void (*)(void *,void *,void *,void *)>(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_controllerSliderFunction)((void *)p1,(void *)p2,(void *)p3,(void *)p3);
  return;
 } else {
  return;
 }
}
void igDefaultInterfaceManager_virtual9C(int p0,int p1,int p2,int p3){
 if(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_controllerPointOfViewFunction){
  reinterpret_cast<void (*)(void *,void *,void *,void *)>(reinterpret_cast<Meta::igDefaultInterfaceManager *>((void *)p0)->_controllerPointOfViewFunction)((void *)p1,(void *)p2,(void *)p3,(void *)p3);
  return;
 } else {
  return;
 }
}
}
#pragma pop
