#include <unknownGen.h>
#include <meta/beNDMWStatusPowerSocket.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80382858(void *,void *,void *,void *);
}
extern "C" {
void beNDMWStatusPowerSocket_virtualA4(int p0,int p1){
 fn_80382858((void *)p0,reinterpret_cast<Meta::beNDMWStatusPowerSocket *>((void *)p0)->_wpuPocket,(void *)reinterpret_cast<Meta::beNDMWStatusPowerSocket *>((void *)p0)->_pocketPos,(void *)p1);
}
void beNDMWStatusPowerSocket_virtual88(int p0,int p1){
 if((int)p1!=-1){
  fn_80382858((void *)p0,reinterpret_cast<Meta::beNDMWStatusPowerSocket *>((void *)p0)->_powerSocket,(void *)0,(void *)p1);
  return;
 } else {
  return;
 }
}
}
#pragma pop
