#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80031498();
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_8055D518[4];
extern char lbl_8055D51C[4];
extern char lbl_8055D520[4];
extern char lbl_8055D524[4];
extern void *lbl_80561C30;
extern void *lbl_80561C34;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_800315F4(){return fn_80031498();}
void fn_80031614(){
 void *value0=lbl_80561C30;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055D518,1);
 void *value2=fn_800658E4(value0,value1);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 fn_800659C0(value0,lbl_8055D51C,lbl_8055D520,lbl_8055D524,value1);
}
void fn_80031690(){
 if(!lbl_80561C34){
  void *object=(lbl_80561C34=fn_8006546C(lbl_80561C30,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561C34));
   reinterpret_cast<short *>(lbl_80561C34)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561C34);
  }
 }
}
}
#pragma pop
