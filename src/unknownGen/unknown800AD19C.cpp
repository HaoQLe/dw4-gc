#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AD3D0();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804780FC[];
extern char lbl_8047E380[];
extern char lbl_8047E3E4[];
extern char lbl_8055DEF4[8];
extern void *lbl_8056249C;
extern void *lbl_805624A0;
void *fn_800AD19C();
void *fn_800AD1D8();
void fn_800AD248();
void fn_800AD270();
void *fn_800AD2DC();
}
struct UnknownGenObject800AD1D8_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800AD19C(){
 if(!lbl_8056249C || !(reinterpret_cast<unsigned int *>(lbl_8056249C)[0x24/4]&4)) fn_800AD248();
 return lbl_8056249C;
}
void *fn_800AD1D8(){
 UnknownGenObject800AD1D8_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_8047E3E4;
 object.unknown00=lbl_8047E380;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800AD248(){
 fn_80066188((int)fn_800AD270);
}
void fn_800AD270(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_8056249C,(int)fn_8002907C,(int)fn_80024180,(int)fn_800AD2DC,(int)lbl_804780FC,20,(int)fn_800AD1D8,0,0,(int)lbl_8055DEF4);
}
void *fn_800AD2DC(){return fn_800AD19C();}
void *fn_800AD2FC(void *object){
 fn_800AD3D0();
 return fn_8006546C(lbl_805624A0,object);
}
void *fn_800AD334(){
 if(!lbl_805624A0 || !(reinterpret_cast<unsigned int *>(lbl_805624A0)[0x24/4]&4)) fn_800AD3D0();
 return lbl_805624A0;
}
}
#pragma pop
