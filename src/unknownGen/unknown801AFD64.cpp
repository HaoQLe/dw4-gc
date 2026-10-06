#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void fn_8002907C();
void fn_80029D58();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801B00C4();
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AC8B0[];
extern char lbl_804AC8C8[];
extern char lbl_804B9200[];
extern char lbl_804B925C[];
extern char lbl_804B92C0[];
extern char lbl_8056025C[8];
extern void *lbl_805621F4;
extern void *lbl_805648A4;
extern void *lbl_805648A8;
void *fn_801AFDA0();
void *fn_801AFDDC();
void fn_801AFE4C();
void fn_801AFE74();
void *fn_801AFEE0();
void *fn_801AFF38();
void *fn_801AFF74();
void fn_801B000C();
void fn_801B0034();
void *fn_801B00A4();
}
struct UnknownGenObject801AFDDC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801AFF74 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AFF74(){fn_8006665C(this);}
};
struct UnknownGenObject801AFF74_0 : UnknownGenRoot801AFF74 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801AFF74_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801AFF74 : UnknownGenObject801AFF74_0 {
 char unknown0C[20];
 inline ~UnknownGenObject801AFF74(){unknown00=lbl_804B9200;}
};
extern "C" {
void *fn_801AFD64(){
 if(!lbl_805648A4) lbl_805648A4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805648A4;
}
void *fn_801AFDA0(){
 if(!lbl_805648A4 || !(reinterpret_cast<unsigned int *>(lbl_805648A4)[0x24/4]&4)) fn_801AFE4C();
 return lbl_805648A4;
}
void *fn_801AFDDC(){
 UnknownGenObject801AFDDC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B92C0;
 object.unknown00=lbl_804B925C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AFE4C(){
 fn_80066188((int)fn_801AFE74);
}
void fn_801AFE74(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805648A4,(int)fn_8002907C,(int)fn_80024180,(int)fn_801AFEE0,(int)lbl_804AC8B0,20,(int)fn_801AFDDC,0,0,(int)lbl_8056025C);
}
void *fn_801AFEE0(){return fn_801AFDA0();}
void *fn_801AFF00(void *object){
 fn_801B000C();
 return fn_8006546C(lbl_805648A8,object);
}
void *fn_801AFF38(){
 if(!lbl_805648A8 || !(reinterpret_cast<unsigned int *>(lbl_805648A8)[0x24/4]&4)) fn_801B000C();
 return lbl_805648A8;
}
void *fn_801AFF74(){
 UnknownGenObject801AFF74 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B9200;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B000C(){
 fn_80066188((int)fn_801B0034);
}
void fn_801B0034(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805648A8,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_801B00A4,(int)lbl_804AC8C8,24,(int)fn_801AFF74,(int)fn_801B00C4,0,0);
}
void *fn_801B00A4(){return fn_801AFF38();}
}
#pragma pop
