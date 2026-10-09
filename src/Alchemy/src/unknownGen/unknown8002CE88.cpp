#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80021D70();
void *fn_800237D0();
void *fn_80029E64(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
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
void *igGamecubeLongTimer_getMeta();
void igLocationTable_fieldInit();
void igMetaField_register();
void igObject_register();
extern char lbl_804652FC[];
extern char lbl_8046530C[];
extern char lbl_80465324[];
extern char lbl_80465334[];
extern char lbl_80471914[];
extern char lbl_80472100[];
extern char lbl_804721F4[];
extern char lbl_804722E8[];
extern char lbl_8055D36C[8];
extern char lbl_8055D374[8];
extern char lbl_8055D37C[4];
extern char lbl_8055D380[4];
extern char lbl_8055D384[4];
extern char lbl_8055D388[4];
extern void *lbl_8056198C;
extern void *lbl_80561990;
extern void *lbl_80561994;
extern void *lbl_80561998;
extern void *lbl_805619A0;
extern void *lbl_805621F4;
void *igLongMetaField_getMeta();
void *igLongMetaField_vtableRead();
void fn_8002CFA8();
void igLongMetaField_register();
void *igLongMetaField_getMetaCall();
void *igLongArrayMetaField_getMeta();
void *igLongArrayMetaField_vtableRead();
void fn_8002D1FC();
void igLongArrayMetaField_register();
void *igLongArrayMetaField_getMetaCall();
void *igLongArrayMetaField_parentMeta();
void igLongArrayMetaField_fieldInit();
void *igLocationTable_getMeta();
void *igLocationTable_vtableRead();
void fn_8002D584();
void igLocationTable_register();
void *igLocationTable_getMetaCall();
}
struct UnknownGenRoot8002CF1C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002CF1C(){fn_800638E0(this);}
};
struct UnknownGenObject8002CF1C_0 : UnknownGenRoot8002CF1C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8002CF1C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8002CF1C : UnknownGenObject8002CF1C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8002CF1C(){unknown00=lbl_80472100;}
};
struct UnknownGenRoot8002D160 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002D160(){fn_800638E0(this);}
};
struct UnknownGenObject8002D160_0 : UnknownGenRoot8002D160 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8002D160_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8002D160_1 : UnknownGenObject8002D160_0 {
 inline ~UnknownGenObject8002D160_1(){unknown00=lbl_80472100;}
};
struct UnknownGenObject8002D160 : UnknownGenObject8002D160_1 {
 char unknown10[48];
 inline ~UnknownGenObject8002D160(){unknown00=lbl_804721F4;}
};
struct UnknownGenRoot8002D44C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002D44C(){fn_8006665C(this);}
};
struct UnknownGenObject8002D44C : UnknownGenRoot8002D44C {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject8002D44C(){unknown00=lbl_804722E8;}
};
extern "C" {
void *igGamecubeLongTimer_getMetaCall(){return igGamecubeLongTimer_getMeta();}
void *fn_8002CEA8(void *object){
 fn_8002CFA8();
 return fn_8006546C(lbl_8056198C,object);
}
void *igLongMetaField_getMeta(){
 if(!lbl_8056198C || !(reinterpret_cast<unsigned int *>(lbl_8056198C)[0x24/4]&4)) fn_8002CFA8();
 return lbl_8056198C;
}
void *igLongMetaField_vtableRead(){
 UnknownGenObject8002CF1C object;
 object.unknown00=lbl_80472100;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002CFA8(){
 fn_80066188((int)igLongMetaField_register);
}
void igLongMetaField_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_8056198C,(int)igMetaField_register,(int)fn_80021D70,(int)igLongMetaField_getMetaCall,(int)lbl_804652FC,52,(int)igLongMetaField_vtableRead,0,0,(int)lbl_8055D36C);
}
void *igLongMetaField_getMetaCall(){return igLongMetaField_getMeta();}
void fn_8002D05C(){
 if(!lbl_80561990){
  void *object=(lbl_80561990=fn_8006546C(lbl_8056198C,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561990));
   reinterpret_cast<short *>(lbl_80561990)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561990);
  }
 }
}
void *fn_8002D0F4(){
 if(!lbl_80561990){
  fn_8002CFA8();
 }
 return lbl_80561990;
}
void *igLongArrayMetaField_getMeta(){
 if(!lbl_80561994 || !(reinterpret_cast<unsigned int *>(lbl_80561994)[0x24/4]&4)) fn_8002D1FC();
 return lbl_80561994;
}
void *igLongArrayMetaField_vtableRead(){
 UnknownGenObject8002D160 object;
 object.unknown00=lbl_80472100;
 object.unknown00=lbl_804721F4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002D1FC(){
 fn_80066188((int)igLongArrayMetaField_register);
}
void igLongArrayMetaField_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561994,(int)igLongMetaField_register,(int)igLongArrayMetaField_parentMeta,(int)igLongArrayMetaField_getMetaCall,(int)lbl_8046530C,56,(int)igLongArrayMetaField_vtableRead,(int)igLongArrayMetaField_fieldInit,0,(int)lbl_8055D374);
}
void *igLongArrayMetaField_getMetaCall(){return igLongArrayMetaField_getMeta();}
void *igLongArrayMetaField_parentMeta(){return lbl_8056198C;}
void igLongArrayMetaField_fieldInit(){
 void *meta=lbl_80561994;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055D37C,1);
 fn_80053650(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055D380,lbl_8055D384,lbl_8055D388,field);
}
void fn_8002D33C(){
 if(!lbl_80561998){
  void *object=(lbl_80561998=fn_8006546C(lbl_80561994,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561998));
   reinterpret_cast<short *>(lbl_80561998)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561998);
  }
 }
}
void *fn_8002D3D4(){
 if(!lbl_805619A0) lbl_805619A0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805619A0;
}
void *igLocationTable_getMeta(){
 if(!lbl_805619A0 || !(reinterpret_cast<unsigned int *>(lbl_805619A0)[0x24/4]&4)) fn_8002D584();
 return lbl_805619A0;
}
void *igLocationTable_vtableRead(){
 UnknownGenObject8002D44C object;
 object.unknown00=lbl_804722E8;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002D584(){
 fn_80066188((int)igLocationTable_register);
}
void igLocationTable_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805619A0,(int)igObject_register,(int)fn_800237D0,(int)igLocationTable_getMetaCall,(int)lbl_80465334,32,(int)igLocationTable_vtableRead,(int)igLocationTable_fieldInit,0,(int)lbl_80465324);
}
void *igLocationTable_getMetaCall(){return igLocationTable_getMeta();}
}
#pragma pop
