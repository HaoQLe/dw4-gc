#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void *fn_8011148C();
void fn_801AA6DC();
void fn_801AABFC();
void fn_801AACA8();
void *fn_801B45F8();
void fn_801BF938();
extern char lbl_804AB3A4[];
extern char lbl_804AB3B8[];
extern char lbl_804AB3D4[];
extern char lbl_804B31B0[];
extern char lbl_804B326C[];
extern char lbl_80560078[8];
extern char lbl_80560080[4];
extern char lbl_80560084[4];
extern char lbl_80560088[4];
extern char lbl_8056008C[4];
extern char lbl_80560090[8];
extern void *lbl_805621F4;
extern void *lbl_8056465C;
extern void *lbl_80564660;
extern void *lbl_80564668;
void *fn_801AA784();
void *fn_801AA7C0();
void fn_801AA800();
void fn_801AA828();
void *fn_801AA890();
void *fn_801AA8EC();
void fn_801AA928();
void fn_801AA950();
void *fn_801AA9C0();
void fn_801AA9E0();
void *fn_801AAA78();
void *fn_801AAAB4();
void fn_801AAB3C();
void fn_801AAB64();
void *fn_801AABDC();
}
struct UnknownGenObject801AA7C0_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot801AAAB4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AAAB4(){fn_8006665C(this);}
};
struct UnknownGenObject801AAAB4 : UnknownGenRoot801AAAB4 {
 char unknown04[24];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801AAAB4(){unknown00=lbl_804B326C;}
};
extern "C" {
void *fn_801AA710(void *object){
 fn_801AA800();
 return fn_8006546C(lbl_8056465C,object);
}
void *fn_801AA748(){
 if(!lbl_8056465C) lbl_8056465C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056465C;
}
void *fn_801AA784(){
 if(!lbl_8056465C || !(reinterpret_cast<unsigned int *>(lbl_8056465C)[0x24/4]&4)) fn_801AA800();
 return lbl_8056465C;
}
void *fn_801AA7C0(){
 UnknownGenObject801AA7C0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804B31B0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AA800(){
 fn_80066188((int)fn_801AA828);
}
void fn_801AA828(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056465C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801AA890,(int)lbl_804AB3A4,8,(int)fn_801AA7C0,0,0,0);
}
void *fn_801AA890(){return fn_801AA784();}
void *fn_801AA8B0(){
 if(!lbl_80564660) lbl_80564660=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564660;
}
void *fn_801AA8EC(){
 if(!lbl_80564660 || !(reinterpret_cast<unsigned int *>(lbl_80564660)[0x24/4]&4)) fn_801AA928();
 return lbl_80564660;
}
void fn_801AA928(){
 fn_80066188((int)fn_801AA950);
}
void fn_801AA950(){
 fn_801AA6DC();
 fn_80066204(1,(int)&lbl_80564660,(int)fn_801BF938,(int)fn_8011148C,(int)fn_801AA9C0,(int)lbl_804AB3B8,36,0,(int)fn_801AA9E0,0,(int)lbl_80560078);
}
void *fn_801AA9C0(){return fn_801AA8EC();}
void fn_801AA9E0(){
 void *value0=lbl_80564660;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_80560080,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801B45F8();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+40)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+39)=2;
 fn_800659C0(value0,lbl_80560084,lbl_80560088,lbl_8056008C,value1);
}
void *fn_801AAA78(){
 if(!lbl_80564668 || !(reinterpret_cast<unsigned int *>(lbl_80564668)[0x24/4]&4)) fn_801AAB3C();
 return lbl_80564668;
}
void *fn_801AAAB4(){
 UnknownGenObject801AAAB4 object;
 object.unknown00=lbl_804B326C;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AAB3C(){
 fn_80066188((int)fn_801AAB64);
}
void fn_801AAB64(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564668,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801AABDC,(int)lbl_804AB3D4,32,(int)fn_801AAAB4,(int)fn_801AABFC,(int)fn_801AACA8,(int)lbl_80560090);
}
void *fn_801AABDC(){return fn_801AAA78();}
}
#pragma pop
