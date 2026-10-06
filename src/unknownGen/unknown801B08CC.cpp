#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_800284EC();
void *fn_80029E64(void *);
void fn_8002EABC();
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_801AA6DC();
void fn_801B0C98();
void *fn_801B0D2C();
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_804AC9C8[];
extern char lbl_804AC9DC[];
extern char lbl_804B39E8[];
extern char lbl_804B3A54[];
extern char lbl_80560274[8];
extern void *lbl_805621F4;
extern void *lbl_805648D0;
extern void *lbl_805648D4;
void *fn_801B0940();
void *fn_801B097C();
void fn_801B09BC();
void fn_801B09E4();
void *fn_801B0A4C();
void *fn_801B0AA4();
void *fn_801B0AE0();
void fn_801B0BD8();
void fn_801B0C00();
void *fn_801B0C78();
}
struct UnknownGenObject801B097C_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot801B0AE0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B0AE0(){fn_8006665C(this);}
};
struct UnknownGenObject801B0AE0_0 : UnknownGenRoot801B0AE0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801B0AE0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801B0AE0_1 : UnknownGenObject801B0AE0_0 {
 inline ~UnknownGenObject801B0AE0_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject801B0AE0 : UnknownGenObject801B0AE0_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject801B0AE0(){unknown00=lbl_804B3A54;}
};
extern "C" {
void *fn_801B08CC(void *object){
 fn_801B09BC();
 return fn_8006546C(lbl_805648D0,object);
}
void *fn_801B0904(){
 if(!lbl_805648D0) lbl_805648D0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805648D0;
}
void *fn_801B0940(){
 if(!lbl_805648D0 || !(reinterpret_cast<unsigned int *>(lbl_805648D0)[0x24/4]&4)) fn_801B09BC();
 return lbl_805648D0;
}
void *fn_801B097C(){
 UnknownGenObject801B097C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804B39E8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B09BC(){
 fn_80066188((int)fn_801B09E4);
}
void fn_801B09E4(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805648D0,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801B0A4C,(int)lbl_804AC9C8,8,(int)fn_801B097C,0,0,0);
}
void *fn_801B0A4C(){return fn_801B0940();}
void *fn_801B0A6C(void *object){
 fn_801B0BD8();
 return fn_8006546C(lbl_805648D4,object);
}
void *fn_801B0AA4(){
 if(!lbl_805648D4 || !(reinterpret_cast<unsigned int *>(lbl_805648D4)[0x24/4]&4)) fn_801B0BD8();
 return lbl_805648D4;
}
void *fn_801B0AE0(){
 UnknownGenObject801B0AE0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804B3A54;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B0BD8(){
 fn_80066188((int)fn_801B0C00);
}
void fn_801B0C00(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805648D4,(int)fn_8002EABC,(int)fn_800284EC,(int)fn_801B0C78,(int)lbl_804AC9DC,24,(int)fn_801B0AE0,(int)fn_801B0C98,(int)fn_801B0D2C,(int)lbl_80560274);
}
void *fn_801B0C78(){return fn_801B0AA4();}
}
#pragma pop
