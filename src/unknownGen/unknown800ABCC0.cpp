#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800A325C(void *);
void fn_800ABC8C();
void fn_800ABF00();
void fn_800BB228();
extern char lbl_80477D08[];
extern char lbl_8047A61C[];
extern char lbl_8047D514[];
extern char lbl_8055DE60[8];
extern void *lbl_80562404;
extern void *lbl_80562A58;
void *fn_800ABCF8();
void *fn_800ABD34();
void fn_800ABE3C();
void fn_800ABE64();
void *fn_800ABED8();
void *fn_800ABEF8();
}
struct UnknownGenRoot800ABD34 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800ABD34(){fn_8006665C(this);}
};
struct UnknownGenObject800ABD34 : UnknownGenRoot800ABD34 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject800ABD34(){unknown00=lbl_8047A61C;}
};
extern "C" {
void *fn_800ABCC0(void *object){
 fn_800ABE3C();
 return fn_8006546C(lbl_80562404,object);
}
void *fn_800ABCF8(){
 if(!lbl_80562404 || !(reinterpret_cast<unsigned int *>(lbl_80562404)[0x24/4]&4)) fn_800ABE3C();
 return lbl_80562404;
}
void *fn_800ABD34(){
 UnknownGenObject800ABD34 object;
 object.unknown00=lbl_8047D514;
 object.unknown00=lbl_8047A61C;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
UnknownGenHolder *dtor_800ABDC8(UnknownGenHolder *object,short flags){
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
void fn_800ABE3C(){
 fn_80066188((int)fn_800ABE64);
}
void fn_800ABE64(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562404,(int)fn_800BB228,(int)fn_800ABEF8,(int)fn_800ABED8,(int)lbl_80477D08,12,(int)fn_800ABD34,(int)fn_800ABF00,0,(int)lbl_8055DE60);
}
void *fn_800ABED8(){return fn_800ABCF8();}
void *fn_800ABEF8(){return lbl_80562A58;}
}
#pragma pop
