#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void fn_800D05CC();
void fn_800D0780();
void *fn_800D7B5C();
extern char lbl_80488A70[];
extern char lbl_80491C58[];
extern char lbl_80492510[];
extern void *lbl_80562E1C;
extern void *lbl_80562E24;
void *fn_800D0484();
void *fn_800D04C0();
void fn_800D050C();
void fn_800D0534();
void *fn_800D05A4();
void *fn_800D05C4();
}
struct UnknownGenObject800D04C0_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800D0464(){return fn_800D7B5C();}
void *fn_800D0484(){
 if(!lbl_80562E1C || !(reinterpret_cast<unsigned int *>(lbl_80562E1C)[0x24/4]&4)) fn_800D050C();
 return lbl_80562E1C;
}
void *fn_800D04C0(){
 UnknownGenObject800D04C0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80491C58;
 object.unknown00=lbl_80492510;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D050C(){
 fn_80066188((int)fn_800D0534);
}
void fn_800D0534(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562E1C,(int)fn_800D0780,(int)fn_800D05C4,(int)fn_800D05A4,(int)lbl_80488A70,20,(int)fn_800D04C0,(int)fn_800D05CC,0,0);
}
void *fn_800D05A4(){return fn_800D0484();}
void *fn_800D05C4(){return lbl_80562E24;}
}
#pragma pop
