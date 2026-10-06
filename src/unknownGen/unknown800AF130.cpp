#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800A325C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800AF3B4();
void fn_800AF44C();
extern char lbl_80478520[];
extern char lbl_8047AF6C[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E030[8];
extern void *lbl_805621F4;
extern void *lbl_80562548;
void *fn_800AF1A4();
void *fn_800AF1E0();
void fn_800AF2F4();
void fn_800AF31C();
void *fn_800AF394();
}
struct UnknownGenRoot800AF1E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AF1E0(){fn_8006665C(this);}
};
struct UnknownGenObject800AF1E0 : UnknownGenRoot800AF1E0 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject800AF1E0(){unknown00=lbl_8047AF6C;}
};
extern "C" {
void *fn_800AF130(void *object){
 fn_800AF2F4();
 return fn_8006546C(lbl_80562548,object);
}
void *fn_800AF168(){
 if(!lbl_80562548) lbl_80562548=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562548;
}
void *fn_800AF1A4(){
 if(!lbl_80562548 || !(reinterpret_cast<unsigned int *>(lbl_80562548)[0x24/4]&4)) fn_800AF2F4();
 return lbl_80562548;
}
void *fn_800AF1E0(){
 UnknownGenObject800AF1E0 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047AF6C;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
UnknownGenHolder *dtor_800AF280(UnknownGenHolder *object,short flags){
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
void fn_800AF2F4(){
 fn_80066188((int)fn_800AF31C);
}
void fn_800AF31C(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562548,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800AF394,(int)lbl_80478520,20,(int)fn_800AF1E0,(int)fn_800AF3B4,(int)fn_800AF44C,(int)lbl_8055E030);
}
void *fn_800AF394(){return fn_800AF1A4();}
}
#pragma pop
