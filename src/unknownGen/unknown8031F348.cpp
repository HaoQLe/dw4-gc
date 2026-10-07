#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800695CC(void *,void *,void *);
void fn_800A325C(void *);
extern void *lbl_80534BE4;
extern void *lbl_80561748;
}
extern "C" {
UnknownGenHolder *dtor_8031F348(UnknownGenHolder *object,short flags){
 if(object){
  UnknownGenValue *value=object->unknown00;
  if(value){
   --value->unknown04;
   if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);
  }
  if(flags>0) fn_800A325C(object);
 }
 return object;
}
void *fn_8031F3BC(){return lbl_80534BE4;}
void fn_8031F3CC(int p0,int p1){
 fn_800695CC((void *)p0,lbl_80561748,(void *)p1);
}
void fn_8031F3FC(int p0,int p1){
 fn_800695CC((void *)p0,lbl_80561748,(void *)p1);
}
void fn_8031F42C(int p0,int p1){
 fn_800695CC((void *)p0,lbl_80561748,(void *)p1);
}
void fn_8031F45C(int p0,int p1){
 fn_800695CC((void *)p0,lbl_80561748,(void *)p1);
}
void fn_8031F48C(int p0,int p1){
 fn_800695CC((void *)p0,lbl_80561748,(void *)p1);
}
void fn_8031F4BC(int p0,int p1){
 fn_800695CC((void *)p0,lbl_80561748,(void *)p1);
}
void fn_8031F4EC(int p0,int p1){
 fn_800695CC((void *)p0,lbl_80561748,(void *)p1);
}
void fn_8031F51C(int p0,int p1){
 fn_800695CC((void *)p0,lbl_80561748,(void *)p1);
}
}
#pragma pop
