#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void fn_80046E58(void *,void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800B1168();
void *fn_800B1738();
void fn_800CDB9C();
void fn_800CDDA8();
extern char lbl_804788D4[];
extern char lbl_804788E8[];
extern char lbl_80478910[];
extern char lbl_80478924[];
extern char lbl_8047B3C4[];
extern char lbl_8047B448[];
extern char lbl_8047B4C8[];
extern char lbl_8047B548[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E170[4];
extern char lbl_8055E174[4];
extern char lbl_8055E178[4];
extern char lbl_8055E17C[4];
extern char lbl_8055E180[4];
extern char lbl_8055E184[8];
extern char lbl_8055E18C[4];
extern char lbl_8055E190[4];
extern char lbl_8055E194[4];
extern char lbl_8055E198[4];
extern char lbl_8055E19C[4];
extern char lbl_8055E1A0[4];
extern char lbl_8055E1A4[4];
extern char lbl_8055E1A8[4];
extern char lbl_8055E1AC[4];
extern void *lbl_805621F4;
extern void *lbl_8056260C;
extern void *lbl_80562614;
extern void *lbl_8056261C;
extern void *lbl_80562624;
void *fn_800B09E0();
void *fn_800B0A1C();
void fn_800B0A74();
void fn_800B0A9C();
void *fn_800B0B0C();
void fn_800B0B2C();
void *fn_800B0C2C();
void *fn_800B0C68();
void fn_800B0D08();
void fn_800B0D30();
void *fn_800B0DA4();
void fn_800B0DC4();
void *fn_800B0E44();
void *fn_800B0E80();
void fn_800B0ED8();
void fn_800B0F00();
void *fn_800B0F70();
void fn_800B0F90();
void *fn_800B101C();
void *fn_800B1058();
void fn_800B10B0();
void fn_800B10D8();
void *fn_800B1148();
}
struct UnknownGenObject800B0A1C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B0C68 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B0C68(){fn_8006665C(this);}
};
struct UnknownGenObject800B0C68 : UnknownGenRoot800B0C68 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800B0C68(){unknown00=lbl_8047B448;}
};
struct UnknownGenObject800B0E80_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B1058_0 {
 void *unknown00;
 char unknown04[36];
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
void fn_800B0B2C(){
 void *value0=lbl_8056260C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E170,1);
 void *value2=fn_800658E4(value0,value1);
 fn_80046E58(value2,lbl_8055E180);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_800CDDA8;
 fn_800659C0(value0,lbl_8055E174,lbl_8055E178,lbl_8055E17C,value1);
}
void *fn_800B0BB8(void *object){
 fn_800B0D08();
 return fn_8006546C(lbl_80562614,object);
}
void *fn_800B0BF0(){
 if(!lbl_80562614) lbl_80562614=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562614;
}
void *fn_800B0C2C(){
 if(!lbl_80562614 || !(reinterpret_cast<unsigned int *>(lbl_80562614)[0x24/4]&4)) fn_800B0D08();
 return lbl_80562614;
}
void *fn_800B0C68(){
 UnknownGenObject800B0C68 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B448;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B0D08(){
 fn_80066188((int)fn_800B0D30);
}
void fn_800B0D30(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562614,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B0DA4,(int)lbl_804788E8,16,(int)fn_800B0C68,(int)fn_800B0DC4,0,(int)lbl_8055E184);
}
void *fn_800B0DA4(){return fn_800B0C2C();}
void fn_800B0DC4(){
 void *value0=lbl_80562614;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E18C,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800B1738();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_8055E190,lbl_8055E194,lbl_8055E198,value1);
}
void *fn_800B0E44(){
 if(!lbl_8056261C || !(reinterpret_cast<unsigned int *>(lbl_8056261C)[0x24/4]&4)) fn_800B0ED8();
 return lbl_8056261C;
}
void *fn_800B0E80(){
 UnknownGenObject800B0E80_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B4C8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B0ED8(){
 fn_80066188((int)fn_800B0F00);
}
void fn_800B0F00(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_8056261C,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B0F70,(int)lbl_80478910,16,(int)fn_800B0E80,(int)fn_800B0F90,0,0);
}
void *fn_800B0F70(){return fn_800B0E44();}
void fn_800B0F90(){
 void *value0=lbl_8056261C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E19C,1);
 void *value2=fn_800658E4(value0,value1);
 fn_80046E58(value2,lbl_8055E1AC);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_800CDB9C;
 fn_800659C0(value0,lbl_8055E1A0,lbl_8055E1A4,lbl_8055E1A8,value1);
}
void *fn_800B101C(){
 if(!lbl_80562624 || !(reinterpret_cast<unsigned int *>(lbl_80562624)[0x24/4]&4)) fn_800B10B0();
 return lbl_80562624;
}
void *fn_800B1058(){
 UnknownGenObject800B1058_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B548;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B10B0(){
 fn_80066188((int)fn_800B10D8);
}
void fn_800B10D8(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562624,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B1148,(int)lbl_80478924,32,(int)fn_800B1058,(int)fn_800B1168,0,0);
}
void *fn_800B1148(){return fn_800B101C();}
}
#pragma pop
