#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800BBF58();
extern char lbl_8047A110[];
extern char lbl_8047A314[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_80562A88;
void *fn_800BBE0C();
void *fn_800BBE48();
void fn_800BBEA0();
void fn_800BBEC8();
void *fn_800BBF38();
}
struct UnknownGenObject800BBE48_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_800BBDD4(void *object){
 fn_800BBEA0();
 return fn_8006546C(lbl_80562A88,object);
}
void *fn_800BBE0C(){
 if(!lbl_80562A88 || !(reinterpret_cast<unsigned int *>(lbl_80562A88)[0x24/4]&4)) fn_800BBEA0();
 return lbl_80562A88;
}
void *fn_800BBE48(){
 UnknownGenObject800BBE48_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047A314;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BBEA0(){
 fn_80066188((int)fn_800BBEC8);
}
void fn_800BBEC8(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562A88,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800BBF38,(int)lbl_8047A110,28,(int)fn_800BBE48,(int)fn_800BBF58,0,0);
}
void *fn_800BBF38(){return fn_800BBE0C();}
}
#pragma pop
