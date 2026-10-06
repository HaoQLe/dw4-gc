#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void fn_800CF554();
void *fn_800D75D4();
extern char lbl_8047650C[];
extern char lbl_80480EC0[];
extern char lbl_804885C8[];
extern char lbl_804922CC[];
extern char lbl_8055EA8C[8];
extern void *lbl_805621F4;
extern void *lbl_80562D94;
extern void *lbl_80562D98;
extern void *lbl_80562D9C;
void *fn_800CF37C();
void *fn_800CF3B8();
void fn_800CF498();
void fn_800CF4C0();
void *fn_800CF534();
}
struct UnknownGenRoot800CF3B8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CF3B8(){fn_8006665C(this);}
};
struct UnknownGenObject800CF3B8_0 : UnknownGenRoot800CF3B8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800CF3B8_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800CF3B8 : UnknownGenObject800CF3B8_0 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[24];
 inline ~UnknownGenObject800CF3B8(){unknown00=lbl_804922CC;}
};
extern "C" {
void *fn_800CF250(){return fn_800D75D4();}
void *fn_800CF270(){
 char *data=lbl_80480EC0;
 if(!lbl_80562D94) lbl_80562D94=fn_800635C8(data+0x7648,data+0x7630,data+0x763C,0x3);
 return lbl_80562D94;
}
void *fn_800CF2BC(){
 char *data=lbl_80480EC0;
 if(!lbl_80562D98) lbl_80562D98=fn_800635C8(data+0x76F0,data+0x76D0,data+0x76E0,0x4);
 return lbl_80562D98;
}
void *fn_800CF308(void *object){
 fn_800CF498();
 return fn_8006546C(lbl_80562D9C,object);
}
void *fn_800CF340(){
 if(!lbl_80562D9C) lbl_80562D9C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562D9C;
}
void *fn_800CF37C(){
 if(!lbl_80562D9C || !(reinterpret_cast<unsigned int *>(lbl_80562D9C)[0x24/4]&4)) fn_800CF498();
 return lbl_80562D9C;
}
void *fn_800CF3B8(){
 UnknownGenObject800CF3B8 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804922CC;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800CF498(){
 fn_80066188((int)fn_800CF4C0);
}
void fn_800CF4C0(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562D9C,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_800CF534,(int)lbl_804885C8,36,(int)fn_800CF3B8,(int)fn_800CF554,0,(int)lbl_8055EA8C);
}
void *fn_800CF534(){return fn_800CF37C();}
}
#pragma pop
