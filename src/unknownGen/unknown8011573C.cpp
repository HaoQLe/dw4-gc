#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8010CBD4();
void *fn_8010DD30();
void *fn_80111CD4();
void igObject_register();
void igSimpleChildHolderModel_register();
extern char lbl_804959F8[];
extern char lbl_80495AA4[];
extern char lbl_80496040[];
extern char lbl_80496D18[];
extern char lbl_80497E1C[];
extern char lbl_80497E78[];
extern char lbl_8055F2BC[8];
extern char lbl_8055F2C4[8];
extern char lbl_8055F2CC[8];
extern char lbl_8055F2D4[8];
extern char lbl_8055F2DC[8];
extern void *lbl_805621F4;
extern void *lbl_80563888;
extern void *lbl_805638AC;
void *igActivableHolderModel_getMeta();
void *igActivableHolderModel_vtableRead();
void fn_801158C0();
void igActivableHolderModel_register();
void *igActivableHolderModel_getMetaCall();
void igActivableHolderModel_fieldInit();
void *igAction_getMeta();
void fn_80115A7C();
void igAction_register();
void *igAction_getMetaCall();
}
struct UnknownGenRoot80115778 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80115778(){fn_8006665C(this);}
};
struct UnknownGenObject80115778_0 : UnknownGenRoot80115778 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80115778_0(){unknown00=lbl_80496040;}
};
struct UnknownGenObject80115778_1 : UnknownGenObject80115778_0 {
 inline ~UnknownGenObject80115778_1(){unknown00=lbl_80497E78;}
};
struct UnknownGenObject80115778_2 : UnknownGenObject80115778_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80115778_2(){unknown00=lbl_80497E1C;}
};
struct UnknownGenObject80115778 : UnknownGenObject80115778_2 {
 char unknown28[12];
 UnknownGenRefMember unknown34;
 char unknown38[16];
 inline ~UnknownGenObject80115778(){unknown00=lbl_80496D18;}
};
extern "C" {
void *igActivableHolderModel_getMeta(){
 if(!lbl_80563888 || !(reinterpret_cast<unsigned int *>(lbl_80563888)[0x24/4]&4)) fn_801158C0();
 return lbl_80563888;
}
void *igActivableHolderModel_vtableRead(){
 UnknownGenObject80115778 object;
 object.unknown00=lbl_80496040;
 object.unknown08.value=0;
 object.unknown00=lbl_80497E78;
 object.unknown00=lbl_80497E1C;
 object.unknown24.value=0;
 object.unknown00=lbl_80496D18;
 object.unknown34.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801158C0(){
 fn_80066188((int)igActivableHolderModel_register);
}
void igActivableHolderModel_register(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563888,(int)igSimpleChildHolderModel_register,(int)fn_8010DD30,(int)igActivableHolderModel_getMetaCall,(int)lbl_804959F8,60,(int)igActivableHolderModel_vtableRead,(int)igActivableHolderModel_fieldInit,0,(int)lbl_8055F2BC);
}
void *igActivableHolderModel_getMetaCall(){return igActivableHolderModel_getMeta();}
void igActivableHolderModel_fieldInit(){
 void *value0=lbl_80563888;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F2C4,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80111CD4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_8055F2CC,lbl_8055F2D4,lbl_8055F2DC,value1);
}
void *fn_801159FC(){return lbl_805638AC;}
void *fn_80115A04(){
 if(!lbl_805638AC) lbl_805638AC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805638AC;
}
void *igAction_getMeta(){
 if(!lbl_805638AC || !(reinterpret_cast<unsigned int *>(lbl_805638AC)[0x24/4]&4)) fn_80115A7C();
 return lbl_805638AC;
}
void fn_80115A7C(){
 fn_80066188((int)igAction_register);
}
void igAction_register(){
 fn_8010CBD4();
 fn_80066204(1,(int)&lbl_805638AC,(int)igObject_register,(int)fn_800237D0,(int)igAction_getMetaCall,(int)lbl_80495AA4,8,0,0,0,0);
}
void *igAction_getMetaCall(){return igAction_getMeta();}
}
#pragma pop
