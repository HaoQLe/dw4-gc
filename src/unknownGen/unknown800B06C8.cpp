#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800A325C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800B08D4();
extern char lbl_8047883C[];
extern char lbl_8047B340[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E158[8];
extern void *lbl_805625F4;
void *fn_800B06C8();
void *fn_800B0704();
void fn_800B0818();
void fn_800B0840();
void *fn_800B08B4();
}
struct UnknownGenRoot800B0704 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B0704(){fn_8006665C(this);}
};
struct UnknownGenObject800B0704 : UnknownGenRoot800B0704 {
 char unknown04[20];
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 inline ~UnknownGenObject800B0704(){unknown00=lbl_8047B340;}
};
extern "C" {
void *fn_800B06C8(){
 if(!lbl_805625F4 || !(reinterpret_cast<unsigned int *>(lbl_805625F4)[0x24/4]&4)) fn_800B0818();
 return lbl_805625F4;
}
void *fn_800B0704(){
 UnknownGenObject800B0704 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B340;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
UnknownGenHolder *dtor_800B07A4(UnknownGenHolder *object,short flags){
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
void fn_800B0818(){
 fn_80066188((int)fn_800B0840);
}
void fn_800B0840(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805625F4,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B08B4,(int)lbl_8047883C,32,(int)fn_800B0704,(int)fn_800B08D4,0,(int)lbl_8055E158);
}
void *fn_800B08B4(){return fn_800B06C8();}
}
#pragma pop
