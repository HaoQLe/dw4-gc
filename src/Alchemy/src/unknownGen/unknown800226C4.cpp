#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void fn_80022634();
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
void fn_80075C84(void *);
void *igUnsignedLongMetaField_getMeta();
void igUnsignedLongMetaField_register();
extern char lbl_8046316C[];
extern char lbl_8047085C[];
extern char lbl_80471914[];
extern char lbl_80476F60[];
extern char lbl_8055CF38[8];
extern char lbl_8055CF40[4];
extern char lbl_8055CF44[4];
extern char lbl_8055CF48[4];
extern char lbl_8055CF4C[4];
extern void *lbl_805614A8;
extern void *lbl_805614AC;
extern void *lbl_805614B0;
extern void *lbl_805614B4;
extern void *lbl_805621F4;
void *igUnsignedLongArrayMetaField_getMeta();
void *igUnsignedLongArrayMetaField_vtableRead();
void fn_800228B8();
void igUnsignedLongArrayMetaField_register();
void *igUnsignedLongArrayMetaField_getMetaCall();
void *igUnsignedLongArrayMetaField_parentMeta();
void igUnsignedLongArrayMetaField_fieldInit();
}
struct UnknownGenRoot80022820 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80022820(){fn_80075C84(this);}
};
struct UnknownGenObject80022820_0 : UnknownGenRoot80022820 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80022820_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80022820_1 : UnknownGenObject80022820_0 {
 inline ~UnknownGenObject80022820_1(){unknown00=lbl_80476F60;}
};
struct UnknownGenObject80022820 : UnknownGenObject80022820_1 {
 char unknown10[48];
 inline ~UnknownGenObject80022820(){unknown00=lbl_8047085C;}
};
extern "C" {
void *igUnsignedLongMetaField_getMetaCall(){return igUnsignedLongMetaField_getMeta();}
void fn_800226E4(){
 if(!lbl_805614AC){
  void *object=(lbl_805614AC=fn_8006546C(lbl_805614A8,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805614AC));
   reinterpret_cast<short *>(lbl_805614AC)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805614AC);
  }
 }
}
void *fn_8002277C(){
 if(!lbl_805614AC){
  fn_80022634();
 }
 return lbl_805614AC;
}
void *fn_800227AC(void *object){
 fn_800228B8();
 return fn_8006546C(lbl_805614B0,object);
}
void *igUnsignedLongArrayMetaField_getMeta(){
 if(!lbl_805614B0 || !(reinterpret_cast<unsigned int *>(lbl_805614B0)[0x24/4]&4)) fn_800228B8();
 return lbl_805614B0;
}
void *igUnsignedLongArrayMetaField_vtableRead(){
 UnknownGenObject80022820 object;
 object.unknown00=lbl_8047085C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800228B8(){
 fn_80066188((int)igUnsignedLongArrayMetaField_register);
}
void igUnsignedLongArrayMetaField_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805614B0,(int)igUnsignedLongMetaField_register,(int)igUnsignedLongArrayMetaField_parentMeta,(int)igUnsignedLongArrayMetaField_getMetaCall,(int)lbl_8046316C,56,(int)igUnsignedLongArrayMetaField_vtableRead,(int)igUnsignedLongArrayMetaField_fieldInit,0,(int)lbl_8055CF38);
}
void *igUnsignedLongArrayMetaField_getMetaCall(){return igUnsignedLongArrayMetaField_getMeta();}
void *igUnsignedLongArrayMetaField_parentMeta(){return lbl_805614A8;}
void igUnsignedLongArrayMetaField_fieldInit(){
 void *meta=lbl_805614B0;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055CF40,1);
 fn_80053650(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055CF44,lbl_8055CF48,lbl_8055CF4C,field);
}
void fn_800229F8(){
 if(!lbl_805614B4){
  void *object=(lbl_805614B4=fn_8006546C(lbl_805614B0,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805614B4));
   reinterpret_cast<short *>(lbl_805614B4)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805614B4);
  }
 }
}
}
#pragma pop
