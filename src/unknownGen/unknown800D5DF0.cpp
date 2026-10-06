#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void fn_800D2358();
void fn_800D6058();
extern char lbl_8048A6BC[];
extern char lbl_80491194[];
extern char lbl_804927D4[];
extern char lbl_80492F94[];
extern char lbl_8055ED64[8];
extern void *lbl_80562F74;
extern void *lbl_805630F0;
void *fn_800D5E28();
void *fn_800D5E64();
void fn_800D5F94();
void fn_800D5FBC();
void *fn_800D6030();
void *fn_800D6050();
}
struct UnknownGenRoot800D5E64 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D5E64(){fn_8006665C(this);}
};
struct UnknownGenObject800D5E64_0 : UnknownGenRoot800D5E64 {
 char unknown04[64];
 UnknownGenRefMember unknown44;
 char unknown48[16];
 UnknownGenString unknown58;
 inline ~UnknownGenObject800D5E64_0(){unknown00=lbl_804927D4;}
};
struct UnknownGenObject800D5E64_1 : UnknownGenObject800D5E64_0 {
 inline ~UnknownGenObject800D5E64_1(){unknown00=lbl_80492F94;}
};
struct UnknownGenObject800D5E64 : UnknownGenObject800D5E64_1 {
 UnknownGenRefMember unknown5C;
 char unknown60[8];
 inline ~UnknownGenObject800D5E64(){unknown00=lbl_80491194;}
};
extern "C" {
void *fn_800D5DF0(void *object){
 fn_800D5F94();
 return fn_8006546C(lbl_805630F0,object);
}
void *fn_800D5E28(){
 if(!lbl_805630F0 || !(reinterpret_cast<unsigned int *>(lbl_805630F0)[0x24/4]&4)) fn_800D5F94();
 return lbl_805630F0;
}
void *fn_800D5E64(){
 UnknownGenObject800D5E64 object;
 object.unknown00=lbl_804927D4;
 object.unknown44.value=0;
 object.unknown58.value=0;
 object.unknown00=lbl_80492F94;
 object.unknown00=lbl_80491194;
 object.unknown5C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D5F94(){
 fn_80066188((int)fn_800D5FBC);
}
void fn_800D5FBC(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_805630F0,(int)fn_800D2358,(int)fn_800D6050,(int)fn_800D6030,(int)lbl_8048A6BC,96,(int)fn_800D5E64,(int)fn_800D6058,0,(int)lbl_8055ED64);
}
void *fn_800D6030(){return fn_800D5E28();}
void *fn_800D6050(){return lbl_80562F74;}
}
#pragma pop
