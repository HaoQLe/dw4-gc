#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800321EC();
void fn_80034A64();
void *fn_80053998(void *,void *);
void *fn_800607F4(void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801AD7C4();
void fn_801B09E4();
extern char lbl_80472FA0[];
extern char lbl_80474EB8[];
extern char lbl_80474F18[];
extern char lbl_804ABC04[];
extern char lbl_804ABC18[];
extern char lbl_804ABC24[];
extern char lbl_804B3644[];
extern char lbl_804B39E8[];
extern char lbl_804B98FC[];
extern char lbl_80560194[6];
extern void *lbl_80561D70;
extern void *lbl_805621F4;
extern void *lbl_80564754;
extern char lbl_80564758[4];
extern void *lbl_8056475C;
extern void *lbl_805648D0;
void *fn_801AD398();
void *fn_801AD3D4();
void fn_801AD438();
void fn_801AD460();
void *fn_801AD4D0();
void *fn_801AD4F0();
void fn_801AD4F8();
void *fn_801AD5B4();
void *fn_801AD5F0();
void fn_801AD6FC();
void fn_801AD724();
void *fn_801AD79C();
void *fn_801AD7BC();
}
struct UnknownGenObject801AD3D4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801AD5F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AD5F0(){fn_8006665C(this);}
};
struct UnknownGenObject801AD5F0 : UnknownGenRoot801AD5F0 {
 char unknown04[20];
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[4];
 UnknownGenRefMember unknown24;
 char unknown28[48];
 inline ~UnknownGenObject801AD5F0(){unknown00=lbl_804B3644;}
};
extern "C" {
void *fn_801AD35C(){
 if(!lbl_80564754) lbl_80564754=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564754;
}
void *fn_801AD398(){
 if(!lbl_80564754 || !(reinterpret_cast<unsigned int *>(lbl_80564754)[0x24/4]&4)) fn_801AD438();
 return lbl_80564754;
}
void *fn_801AD3D4(){
 UnknownGenObject801AD3D4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80474F18;
 object.unknown00=lbl_80474EB8;
 object.unknown00=lbl_804B98FC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AD438(){
 fn_80066188((int)fn_801AD460);
}
void fn_801AD460(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564754,(int)fn_80034A64,(int)fn_801AD4F0,(int)fn_801AD4D0,(int)lbl_804ABC04,20,(int)fn_801AD3D4,(int)fn_801AD4F8,0,0);
}
void *fn_801AD4D0(){return fn_801AD398();}
void *fn_801AD4F0(){return lbl_80561D70;}
void fn_801AD4F8(){
 void *meta=lbl_80564754;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_80560194));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_800321EC();
 field->unknown38=0;
 field->unknown1C=lbl_80564758;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
void *fn_801AD5B4(){
 if(!lbl_8056475C || !(reinterpret_cast<unsigned int *>(lbl_8056475C)[0x24/4]&4)) fn_801AD6FC();
 return lbl_8056475C;
}
void *fn_801AD5F0(){
 UnknownGenObject801AD5F0 object;
 object.unknown00=lbl_804B39E8;
 object.unknown00=lbl_804B3644;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AD6FC(){
 fn_80066188((int)fn_801AD724);
}
void fn_801AD724(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056475C,(int)fn_801B09E4,(int)fn_801AD7BC,(int)fn_801AD79C,(int)lbl_804ABC24,80,(int)fn_801AD5F0,(int)fn_801AD7C4,0,(int)lbl_804ABC18);
}
void *fn_801AD79C(){return fn_801AD5B4();}
void *fn_801AD7BC(){return lbl_805648D0;}
}
#pragma pop
