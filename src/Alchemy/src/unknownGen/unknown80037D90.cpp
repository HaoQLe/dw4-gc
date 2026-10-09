#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80029E64(void *);
void fn_80037D00();
void fn_8003FF90(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void igCallStackTable_fieldInit();
void *igCharMetaField_getMeta();
void igCharMetaField_register();
void *igGamecubeCallStackTracer_getMeta();
void igObject_register();
void igUnsignedIntListNoClean_register();
extern char lbl_804677B0[];
extern char lbl_804677C8[];
extern char lbl_804677DC[];
extern char lbl_804677E8[];
extern char lbl_80471914[];
extern char lbl_80472FA0[];
extern char lbl_80473070[];
extern char lbl_80473164[];
extern char lbl_804731E0[];
extern char lbl_80473F24[];
extern char lbl_80474840[];
extern char lbl_804748A0[];
extern char lbl_80474900[];
extern char lbl_8055D678[8];
extern char lbl_8055D680[4];
extern char lbl_8055D684[4];
extern char lbl_8055D688[4];
extern char lbl_8055D68C[4];
extern void *lbl_80561DA4;
extern void *lbl_80561E1C;
extern void *lbl_80561E20;
extern void *lbl_80561E24;
extern void *lbl_80561E28;
extern void *lbl_80561E30;
extern void *lbl_80561E34;
extern void *lbl_805621F4;
void *igCharArrayMetaField_getMeta();
void *igCharArrayMetaField_vtableRead();
void fn_80037F84();
void igCharArrayMetaField_register();
void *igCharArrayMetaField_getMetaCall();
void *igCharArrayMetaField_parentMeta();
void igCharArrayMetaField_fieldInit();
void *igCallStackTracer_getMeta();
void *igCallStackTracer_vtableRead();
void fn_80038244();
void igCallStackTracer_register();
void *igCallStackTracer_getMetaCall();
void *igCallStackTracer_parentMeta();
void *fn_80038304();
void *igGamecubeCallStackTracer_getMetaCall();
void *igCallStackTable_getMeta();
void *igCallStackTable_vtableRead();
void fn_80038478();
void igCallStackTable_register();
void *igCallStackTable_getMetaCall();
}
struct UnknownGenRoot80037EEC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80037EEC(){fn_8003FF90(this);}
};
struct UnknownGenObject80037EEC_0 : UnknownGenRoot80037EEC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80037EEC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80037EEC_1 : UnknownGenObject80037EEC_0 {
 inline ~UnknownGenObject80037EEC_1(){unknown00=lbl_80473F24;}
};
struct UnknownGenObject80037EEC : UnknownGenObject80037EEC_1 {
 char unknown10[48];
 inline ~UnknownGenObject80037EEC(){unknown00=lbl_80473070;}
};
struct UnknownGenObject800381D4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800383B0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800383B0(){fn_8006665C(this);}
};
struct UnknownGenObject800383B0 : UnknownGenRoot800383B0 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject800383B0(){unknown00=lbl_804731E0;}
};
extern "C" {
void *igCharMetaField_getMetaCall(){return igCharMetaField_getMeta();}
void fn_80037DB0(){
 if(!lbl_80561E20){
  void *object=(lbl_80561E20=fn_8006546C(lbl_80561E1C,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561E20));
   reinterpret_cast<short *>(lbl_80561E20)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561E20);
  }
 }
}
void *fn_80037E48(){
 if(!lbl_80561E20){
  fn_80037D00();
 }
 return lbl_80561E20;
}
void *fn_80037E78(void *object){
 fn_80037F84();
 return fn_8006546C(lbl_80561E24,object);
}
void *igCharArrayMetaField_getMeta(){
 if(!lbl_80561E24 || !(reinterpret_cast<unsigned int *>(lbl_80561E24)[0x24/4]&4)) fn_80037F84();
 return lbl_80561E24;
}
void *igCharArrayMetaField_vtableRead(){
 UnknownGenObject80037EEC object;
 object.unknown00=lbl_80473070;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80037F84(){
 fn_80066188((int)igCharArrayMetaField_register);
}
void igCharArrayMetaField_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561E24,(int)igCharMetaField_register,(int)igCharArrayMetaField_parentMeta,(int)igCharArrayMetaField_getMetaCall,(int)lbl_804677B0,56,(int)igCharArrayMetaField_vtableRead,(int)igCharArrayMetaField_fieldInit,0,(int)lbl_8055D678);
}
void *igCharArrayMetaField_getMetaCall(){return igCharArrayMetaField_getMeta();}
void *igCharArrayMetaField_parentMeta(){return lbl_80561E1C;}
void igCharArrayMetaField_fieldInit(){
 void *meta=lbl_80561E24;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055D680,1);
 fn_80053650(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055D684,lbl_8055D688,lbl_8055D68C,field);
}
void fn_800380C4(){
 if(!lbl_80561E28){
  void *object=(lbl_80561E28=fn_8006546C(lbl_80561E24,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561E28));
   reinterpret_cast<short *>(lbl_80561E28)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561E28);
  }
 }
}
void *fn_8003815C(){
 if(!lbl_80561E30) lbl_80561E30=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561E30;
}
void *igCallStackTracer_getMeta(){
 if(!lbl_80561E30 || !(reinterpret_cast<unsigned int *>(lbl_80561E30)[0x24/4]&4)) fn_80038244();
 return lbl_80561E30;
}
void *igCallStackTracer_vtableRead(){
 UnknownGenObject800381D4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80474900;
 object.unknown00=lbl_804748A0;
 object.unknown00=lbl_80474840;
 object.unknown00=lbl_80473164;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80038244(){
 fn_80066188((int)igCallStackTracer_register);
}
void igCallStackTracer_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561E30,(int)igUnsignedIntListNoClean_register,(int)igCallStackTracer_parentMeta,(int)igCallStackTracer_getMetaCall,(int)lbl_804677C8,20,(int)igCallStackTracer_vtableRead,(int)fn_80038304,0,0);
}
void *igCallStackTracer_getMetaCall(){return igCallStackTracer_getMeta();}
void *igCallStackTracer_parentMeta(){return lbl_80561DA4;}
void *fn_80038304(){
 void *value0=lbl_80561E30;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_abstractProxy=(void *)(void *)igGamecubeCallStackTracer_getMetaCall;
 return value0;
}
void *igGamecubeCallStackTracer_getMetaCall(){return igGamecubeCallStackTracer_getMeta();}
void *fn_80038338(){
 if(!lbl_80561E34) lbl_80561E34=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561E34;
}
void *igCallStackTable_getMeta(){
 if(!lbl_80561E34 || !(reinterpret_cast<unsigned int *>(lbl_80561E34)[0x24/4]&4)) fn_80038478();
 return lbl_80561E34;
}
void *igCallStackTable_vtableRead(){
 UnknownGenObject800383B0 object;
 object.unknown00=lbl_804731E0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80038478(){
 fn_80066188((int)igCallStackTable_register);
}
void igCallStackTable_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561E34,(int)igObject_register,(int)fn_800237D0,(int)igCallStackTable_getMetaCall,(int)lbl_804677E8,24,(int)igCallStackTable_vtableRead,(int)igCallStackTable_fieldInit,0,(int)lbl_804677DC);
}
void *igCallStackTable_getMetaCall(){return igCallStackTable_getMeta();}
}
#pragma pop
