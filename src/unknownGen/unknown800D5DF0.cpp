#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80030000();
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void fn_800D2358();
extern char lbl_8048A6BC[];
extern char lbl_80491194[];
extern char lbl_804927D4[];
extern char lbl_80492F94[];
extern char lbl_8055ED64[8];
extern char lbl_8055ED6C[4];
extern char lbl_8055ED70[4];
extern char lbl_8055ED74[4];
extern char lbl_8055ED78[4];
extern void *lbl_80562F74;
extern void *lbl_805630F0;
void *fn_800D5E28();
void *fn_800D5E64();
void fn_800D5F94();
void fn_800D5FBC();
void *fn_800D6030();
void *fn_800D6050();
void fn_800D6058();
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
void fn_800D6058(){
 void *value0=lbl_805630F0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055ED6C,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80030000();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_8055ED70,lbl_8055ED74,lbl_8055ED78,value1);
}
}
#pragma pop
