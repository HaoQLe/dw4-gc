#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void *fn_800ABEF8();
void fn_800AC034();
void *fn_800AC294();
void fn_800B716C();
void fn_800BB228();
extern char lbl_80479760[];
extern char lbl_8047977C[];
extern char lbl_8047C658[];
extern char lbl_8047C6BC[];
extern char lbl_8047D514[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805628B0;
extern void *lbl_805628B4;
void *fn_800B6EE8();
void *fn_800B6F24();
void fn_800B6F70();
void fn_800B6F98();
void *fn_800B7000();
void *fn_800B7020();
void *fn_800B705C();
void fn_800B70B4();
void fn_800B70DC();
void *fn_800B714C();
}
struct UnknownGenObject800B6F24 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenObject800B705C {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B6EB0(void *object){
 fn_800B6F70();
 return fn_8006546C(lbl_805628B0,object);
}
void *fn_800B6EE8(){
 if(!lbl_805628B0 || !(reinterpret_cast<unsigned int *>(lbl_805628B0)[0x24/4]&4)) fn_800B6F70();
 return lbl_805628B0;
}
void *fn_800B6F24(){
 UnknownGenObject800B6F24 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D514;
 object.unknown00=lbl_8047C658;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B6F70(){
 fn_80066188((int)fn_800B6F98);
}
void fn_800B6F98(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805628B0,(int)fn_800BB228,(int)fn_800ABEF8,(int)fn_800B7000,(int)lbl_80479760,8,(int)fn_800B6F24,0,0,0);
}
void *fn_800B7000(){return fn_800B6EE8();}
void *fn_800B7020(){
 if(!lbl_805628B4 || !(reinterpret_cast<unsigned int *>(lbl_805628B4)[0x24/4]&4)) fn_800B70B4();
 return lbl_805628B4;
}
void *fn_800B705C(){
 UnknownGenObject800B705C object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047C6BC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B70B4(){
 fn_80066188((int)fn_800B70DC);
}
void fn_800B70DC(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805628B4,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B714C,(int)lbl_8047977C,16,(int)fn_800B705C,(int)fn_800B716C,0,0);
}
void *fn_800B714C(){return fn_800B7020();}
}
#pragma pop
