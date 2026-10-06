#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800272FC();
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_8055D160[8];
extern char lbl_8055D168[8];
extern char lbl_8055D170[8];
extern char lbl_8055D178[8];
extern void *lbl_80561684;
extern void *lbl_80561688;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_800273CC(){return fn_800272FC();}
void fn_800273EC(){
 void *value0=lbl_80561684;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055D160,2);
 fn_800659C0(value0,lbl_8055D168,lbl_8055D170,lbl_8055D178,value1);
}
void fn_80027454(){
 if(!lbl_80561688){
  void *object=(lbl_80561688=fn_8006546C(lbl_80561684,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561688));
   reinterpret_cast<short *>(lbl_80561688)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561688);
  }
 }
}
}
#pragma pop
