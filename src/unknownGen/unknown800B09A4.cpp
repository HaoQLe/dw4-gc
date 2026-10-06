#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800B0B2C();
extern char lbl_804788D4[];
extern char lbl_8047B3C4[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805621F4;
extern void *lbl_8056260C;
void *fn_800B09E0();
void *fn_800B0A1C();
void fn_800B0A74();
void fn_800B0A9C();
void *fn_800B0B0C();
}
struct UnknownGenObject800B0A1C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B09A4(){
 if(!lbl_8056260C) lbl_8056260C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056260C;
}
void *fn_800B09E0(){
 if(!lbl_8056260C || !(reinterpret_cast<unsigned int *>(lbl_8056260C)[0x24/4]&4)) fn_800B0A74();
 return lbl_8056260C;
}
void *fn_800B0A1C(){
 UnknownGenObject800B0A1C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B3C4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B0A74(){
 fn_80066188((int)fn_800B0A9C);
}
void fn_800B0A9C(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_8056260C,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B0B0C,(int)lbl_804788D4,16,(int)fn_800B0A1C,(int)fn_800B0B2C,0,0);
}
void *fn_800B0B0C(){return fn_800B09E0();}
}
#pragma pop
