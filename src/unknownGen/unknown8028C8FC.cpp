#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_801308D0();
void fn_8013B97C();
void fn_8028CC44();
void fn_8028CEE0();
void fn_8028D104();
void fn_8028D3AC();
void fn_8028D5F4();
void fn_8028DA5C();
void fn_8028DD88();
void fn_8028DF78();
void fn_8028E204();
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_804CC708[];
extern char lbl_804CC714[];
extern char lbl_804CCB68[];
extern char lbl_805660B8[1];
extern char lbl_805660B9[1];
extern void *lbl_805660BC;
void fn_8028C93C();
void *fn_8028C970();
void *fn_8028C9AC();
void fn_8028CB84();
void fn_8028CBAC();
void *fn_8028CC24();
}
struct UnknownGenRoot8028C9AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8028C9AC(){fn_8006665C(this);}
};
struct UnknownGenObject8028C9AC_0 : UnknownGenRoot8028C9AC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8028C9AC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8028C9AC : UnknownGenObject8028C9AC_0 {
 char unknown28[12];
 UnknownGenString unknown34;
 UnknownGenRefMember unknown38;
 UnknownGenRefMember unknown3C;
 UnknownGenRefMember unknown40;
 char unknown44[12];
 inline ~UnknownGenObject8028C9AC(){unknown00=lbl_804CCB68;}
};
extern "C" {
void fn_8028C8FC(){
 fn_8028CB84();
 fn_8028CEE0();
 fn_8028D3AC();
 fn_8028D104();
 fn_8028D5F4();
 fn_8028DA5C();
 fn_8028DF78();
 fn_8028DD88();
 fn_8028E204();
}
void fn_8028C93C(){
 if((int)*reinterpret_cast<signed char *>((lbl_805660B9+0))==0){
  *reinterpret_cast<unsigned char *>((lbl_805660B8+0))=0;
  *reinterpret_cast<unsigned char *>((lbl_805660B9+0))=1;
 }
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_805660B8+0))){
  return;
 }
 *reinterpret_cast<unsigned char *>((lbl_805660B8+0))=1;
}
void *fn_8028C970(){
 if(!lbl_805660BC || !(reinterpret_cast<unsigned int *>(lbl_805660BC)[0x24/4]&4)) fn_8028CB84();
 return lbl_805660BC;
}
void *fn_8028C9AC(){
 UnknownGenObject8028C9AC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804CCB68;
 object.unknown34.value=0;
 object.unknown38.value=0;
 object.unknown3C.value=0;
 object.unknown40.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8028CB84(){
 fn_80066188((int)fn_8028CBAC);
}
void fn_8028CBAC(){
 fn_8028C93C();
 fn_80066204(0,(int)&lbl_805660BC,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_8028CC24,(int)lbl_804CC714,68,(int)fn_8028C9AC,(int)fn_8028CC44,0,(int)lbl_804CC708);
}
void *fn_8028CC24(){return fn_8028C970();}
}
#pragma pop
