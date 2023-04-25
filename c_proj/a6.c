
void __cdecl16far FUN_1008_4db4(void)

{
  int *piVar1;
  undefined *puVar2;
  int *piVar3;
  uint16 *puVar4;
  int *piVar5;
  int local_2e [16];
  uint local_e;
  int local_c;
  uint local_a;
  undefined *local_8;
  undefined2 local_6;
  undefined *local_4;

  local_e = (_DAT_10a8_0a46 & 0x10) >> 4;
  local_c = 0;
  if ((_DAT_10a8_0a46 & 0x2000) == 0) {
    local_a = (_DAT_10a8_0a46 & 8) >> 3;
    if ((_DAT_10a8_0a46 & 8) == 0) {
      FUN_1040_190c();
      FUN_1040_02ec((VA_LIST16)&DAT_10a8_85dc,(byte *)0x437);
    }
    local_6 = 0;
    if (0 < (int)PTR_DAT_10a8_0002_10a8_0038) {
      piVar5 = (int *)&DAT_10a8_8864;
      piVar3 = local_2e;
      local_4 = PTR_DAT_10a8_0002_10a8_0038;
      puVar2 = PTR_DAT_10a8_0002_10a8_0038;
      do {
        piVar1 = piVar5;
        piVar5 = piVar5 + 0x3b;
        *piVar3 = *piVar1;
        piVar3 = piVar3 + 1;
        puVar2 = puVar2 + -1;
      } while (puVar2 != (undefined *)0x0);
    }
    _DAT_10a8_0a46 = _DAT_10a8_0a46 | 0x10;
    local_8 = PTR_DAT_10a8_0000_10a8_0a30;
    PTR_DAT_10a8_0000_10a8_0a30 = (undefined *)&DAT_10a8_0001;
    puVar4 = (uint16 *)0x0;
    if (0 < (int)PTR_DAT_10a8_0002_10a8_0038) {
      piVar3 = local_2e;
      do {
        if ((*(byte *)((int)piVar3 + 1) & 2) != 0) {
          local_c = 1;
          _DAT_10a8_0a46 = _DAT_10a8_0a46 | 10;
          local_4 = (undefined *)FUN_1040_1ae4(1,(int)puVar4,0x20);
          _DAT_10a8_0a46 = _DAT_10a8_0a46 & 0xfffd;
          _DAT_10a8_0a46 = _DAT_10a8_0a46 ^ (byte)((char)local_a << 3 ^ DAT_10a8_0a46) & 8;
          if (local_4 == (undefined *)0x0) {
            FUN_1048_0000(puVar4,*piVar3);
          }
          else {
            FUN_1040_1f9c();
          }
        }
        piVar3 = piVar3 + 1;
        puVar4 = (uint16 *)((int)puVar4 + 1);
      } while ((int)puVar4 < (int)PTR_DAT_10a8_0002_10a8_0038);
    }
    _DAT_10a8_0a46 = _DAT_10a8_0a46 ^ (byte)((char)local_e << 4 ^ DAT_10a8_0a46) & 0x10;
    if (local_c != 0) {
      FUN_1040_190c();
      FUN_1040_02ec((VA_LIST16)&DAT_10a8_85dc,(byte *)0x43b);
    }
    PTR_DAT_10a8_0000_10a8_0a30 = local_8;
    _DAT_10a8_0a46 = _DAT_10a8_0a46 | 0x2000;
  }
  return;
}



undefined2 __cdecl16far FUN_1008_4ece(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  VA_LIST16 valist;

  valist = (VA_LIST16)0x0;
  uVar2 = 1;
  uVar1 = FUN_1018_5112(0x189);
  _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)CONCAT22(uVar1,0x10a8),(LPCSTR)CONCAT22(uVar2,0x10a8),
            valist);
  return (int)&DAT_10a8_86de;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: stack

ulong __stdcall16far
ABOUT(undefined2 param_1_00,int param_1,uint param_3,int param_4,HWND16 param_5,unkbyte10 param_6,
     int16 param_7)

{
  HWND16 hwnd;
  HWND16 HVar1;
  int16 *__return_storage_ptr__;
  undefined *puVar2;
  undefined2 uVar3;
  uint in_DX;
  undefined2 unaff_BP;
  HRGN16 unaff_SI;
  undefined *puVar4;
  HRGN16 unaff_DI;
  RECT16 *unaff_SS;
  void *func;
  COLORREF CVar5;
  undefined2 in_stack_00000000;
  void *in_stack_00000002;
  undefined uVar6;
  undefined uVar7;
  int iVar8;
  undefined2 uVar9;
  int in_stack_0000fff2;
  int in_stack_0000fff4;
  HDC16 in_stack_0000fff6;
  int16 *in_stack_0000fff8;
  undefined2 in_stack_0000fffa;
  int16 *piVar10;
  undefined2 in_stack_0000fffc;
  undefined *puVar11;

  if (param_4 == 0x14) {
    GETCLIENTRECT((HWND16)&stack0xfff2,(RECT16 *)CONCAT22(param_5,unaff_SS));
    FILLRECT((int16 *)PTR_DAT_10a8_0000_10a8_0010,(HDC16)&stack0xfff2,unaff_SS,param_3);
    param_3 = in_DX;
LAB_1008_4f38:
    return CONCAT22(param_3,1);
  }
  if (param_4 == 0x19) {
    if (param_1 == 6) {
      uVar3 = 0xf;
      CVar5 = GETSYSCOLOR((int16)CONCAT214(in_stack_0000fff8,
                                           CONCAT212(in_stack_0000fff6,
                                                     CONCAT210(in_stack_0000fff4,
                                                               CONCAT28(in_stack_0000fff2,
                                                                        CONCAT26(unaff_DI,CONCAT24(
                                                  unaff_SI,CONCAT22(param_3,0xf))))))));
      CVar5 = SETBKCOLOR((HDC16)CVar5.value,CONCAT22(uVar3,(int)(CVar5.value >> 0x10)));
      return CVar5.value & 0xffff0000 | ZEXT24(PTR_DAT_10a8_0000_10a8_0010);
    }
  }
  else {
    if (param_4 == 0x110) {
      PTR_DAT_10a8_0000_10a8_884e = (undefined *)0xfff5;
      PTR_DAT_10a8_0000_10a8_82ba = (undefined *)0x0;
      HVar1 = GETDLGITEM(0x3fd,(int16)CONCAT214(in_stack_0000fffa,
                                                CONCAT212(in_stack_0000fff8,
                                                          CONCAT210(in_stack_0000fff6,
                                                                    CONCAT28(in_stack_0000fff4,
                                                                             CONCAT26(
                                                  in_stack_0000fff2,
                                                  CONCAT24(unaff_DI,CONCAT22(unaff_SI,param_5)))))))
                        );
      hwnd = FUN_1008_4ece();
      iVar8 = (int)s_From___s_c_c_10a8_10a2 + 6;
      uVar6 = (undefined)hwnd;
      uVar7 = (undefined)(hwnd >> 8);
      SETWINDOWTEXT(hwnd,CONCAT22(HVar1,0x10a8));
      PTR_DAT_10a8_0000_10a8_00d0 =
           (undefined *)
           SETTIMER((uint16 *)0x0,0,
                    (uint16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(HVar1,CONCAT28(iVar8,
                                                  CONCAT17(uVar7,CONCAT16(uVar6,CONCAT24(param_5,
                                                  0xe0032))))))),
                    (uint16)CONCAT214(in_stack_00000000,
                                      CONCAT212(unaff_BP,CONCAT210(in_stack_0000fffc,
                                                                   CONCAT28(in_stack_0000fffa,
                                                                            CONCAT26(
                                                  in_stack_0000fff8,
                                                  CONCAT24(in_stack_0000fff6,
                                                           CONCAT22(in_stack_0000fff4,
                                                                    in_stack_0000fff2))))))),
                    in_stack_00000002);
      param_3 = in_DX;
      goto LAB_1008_4f38;
    }
    if (param_4 == 0x111) {
      if ((param_3 == 1) || (param_3 == 2)) {
        KILLTIMER((HWND16)PTR_DAT_10a8_0000_10a8_00d0,
                  (uint16)CONCAT214(in_stack_0000fffa,
                                    CONCAT212(in_stack_0000fff8,
                                              CONCAT210(in_stack_0000fff6,
                                                        CONCAT28(in_stack_0000fff4,
                                                                 CONCAT26(in_stack_0000fff2,
                                                                          CONCAT24(unaff_DI,CONCAT22
                                                  (unaff_SI,param_5))))))));
        PTR_DAT_10a8_0000_10a8_00d0 = (undefined *)0x0;
        ENDDIALOG(1,(int16)CONCAT214(in_stack_0000fffa,
                                     CONCAT212(in_stack_0000fff8,
                                               CONCAT210(in_stack_0000fff6,
                                                         CONCAT28(in_stack_0000fff4,
                                                                  CONCAT26(in_stack_0000fff2,
                                                                           CONCAT24(unaff_DI,
                                                  CONCAT22(unaff_SI,param_5))))))));
        goto LAB_1008_4f38;
      }
      in_DX = param_3;
      if (param_3 == 0x76) {
        func = MAKEPROCINSTANCE((void *)CONCAT22(0x511a,PTR_DAT_10a8_0000_10a8_839a),
                                (int)s_backup_d_10a8_1001 + 7);
        in_DX = (uint)((ulong)func >> 0x10);
        DIALOGBOX((int16 *)func,in_DX,(LPCSTR)(ulong)CONCAT12(0x61,param_5),0,
                  PTR_DAT_10a8_0000_10a8_839a);
        FREEPROCINSTANCE(func);
      }
    }
    else if (param_4 == 0x113) {
      HVar1 = GETDLGITEM(0x428,(int16)CONCAT214(in_stack_0000fffa,
                                                CONCAT212(in_stack_0000fff8,
                                                          CONCAT210(in_stack_0000fff6,
                                                                    CONCAT28(in_stack_0000fff4,
                                                                             CONCAT26(
                                                  in_stack_0000fff2,
                                                  CONCAT24(unaff_DI,CONCAT22(unaff_SI,param_5)))))))
                        );
      PTR_DAT_10a8_0000_10a8_82ba = PTR_DAT_10a8_0000_10a8_82ba + 2;
      if ((int)PTR_DAT_10a8_0000_10a8_5794 <= (int)PTR_DAT_10a8_0000_10a8_82ba) {
        PTR_DAT_10a8_0000_10a8_82ba = (undefined *)0x0;
        PTR_DAT_10a8_0000_10a8_884e = PTR_DAT_10a8_0000_10a8_884e + 1;
        if (0x2d < (int)PTR_DAT_10a8_0000_10a8_884e) {
          PTR_DAT_10a8_0000_10a8_884e = (undefined *)0xfff5;
        }
      }
      GETCLIENTRECT((HWND16)&stack0xfff2,(RECT16 *)CONCAT22(HVar1,unaff_SS));
      __return_storage_ptr__ = (int16 *)GETDC(HVar1);
      SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_59c6,(HRGN16)__return_storage_ptr__,unaff_SI,
                   unaff_DI,(int16)CONCAT214(in_stack_00000000,
                                             CONCAT212(unaff_BP,CONCAT210(in_stack_0000fffc,
                                                                          CONCAT28(in_stack_0000fffa
                                                                                   ,CONCAT26(
                                                  in_stack_0000fff8,
                                                  CONCAT24(in_stack_0000fff6,
                                                           CONCAT22(in_stack_0000fff4,
                                                                    in_stack_0000fff2))))))));
      SETBKMODE((int16 *)&DAT_10a8_0002,(HDC16)__return_storage_ptr__,
                (int16)CONCAT214(in_stack_0000fffc,
                                 CONCAT212(in_stack_0000fffa,
                                           CONCAT210(in_stack_0000fff8,
                                                     CONCAT28(in_stack_0000fff6,
                                                              CONCAT26(in_stack_0000fff4,
                                                                       CONCAT24(in_stack_0000fff2,
                                                                                CONCAT22(unaff_DI,
                                                  unaff_SI))))))));
      SETBKCOLOR((HDC16)_DAT_10a8_5714,
                 (COLORREF)CONCAT22(__return_storage_ptr__,(int)((ulong)_DAT_10a8_5714 >> 0x10)));
      CVar5 = SETTEXTCOLOR((HDC16)_PTR_DAT_10a8_0000_10a8_5910,
                           CONCAT22(__return_storage_ptr__,
                                    (int)((ulong)_PTR_DAT_10a8_0000_10a8_5910 >> 0x10)));
      in_DX = (uint)(CVar5.value >> 0x10);
      INTERSECTCLIPRECT(in_stack_0000fff8,in_stack_0000fff6,
                        (int16)(ZEXT1216(CONCAT210(in_stack_0000fff6,
                                                   CONCAT28(in_stack_0000fff4,
                                                            CONCAT26(in_stack_0000fff2,
                                                                     CONCAT24(unaff_DI,CONCAT22(
                                                  unaff_SI,__return_storage_ptr__)))))) << 0x20),
                        (int16)CONCAT610(CONCAT24(param_1,CONCAT22(param_1_00,in_stack_00000002)),
                                         CONCAT28(in_stack_00000000,
                                                  CONCAT26(unaff_BP,CONCAT24(in_stack_0000fffc,
                                                                             CONCAT22(
                                                  in_stack_0000fffa,in_stack_0000fff8))))),
                        (int16)CONCAT106(param_6,CONCAT24(param_5,CONCAT22(0x113,param_3))),param_7)
      ;
      iVar8 = in_stack_0000fff4 - (int)PTR_DAT_10a8_0000_10a8_82ba;
      puVar2 = PTR_DAT_10a8_0000_10a8_5794 + iVar8;
      puVar4 = PTR_DAT_10a8_0000_10a8_884e;
      piVar10 = __return_storage_ptr__;
      puVar11 = PTR_DAT_10a8_0000_10a8_884e;
      if ((int)PTR_DAT_10a8_0000_10a8_884e < (int)(PTR_DAT_10a8_0000_10a8_884e + 10)) {
        do {
          if (((int)puVar4 < 0) || (0x2b < (int)puVar4)) {
            if (0x2b < (int)puVar4) break;
          }
          else {
            uVar9 = 0xffff;
            uVar3 = FUN_1018_5112((uint)(puVar4 + 0x1d4));
            FUN_1018_5580(__return_storage_ptr__,(int *)&stack0xfff2,(LPCSTR)CONCAT22(uVar9,uVar3),
                          (int16)CONCAT214(puVar11,CONCAT212(piVar10,CONCAT210(puVar2,CONCAT28(
                                                  in_stack_0000fff6,
                                                  CONCAT26(iVar8,CONCAT24(in_stack_0000fff2,
                                                                          CONCAT22(unaff_DI,unaff_SI
                                                                                  ))))))));
          }
          OFFSETRECT((RECT16 *)ZEXT24(PTR_DAT_10a8_0000_10a8_5794),
                     (int16)CONCAT214(puVar2,CONCAT212(in_stack_0000fff6,
                                                       CONCAT210(iVar8,CONCAT28(in_stack_0000fff2,
                                                                                CONCAT26(unaff_DI,
                                                  CONCAT24(unaff_SI,CONCAT22(unaff_SS,&stack0xfff2))
                                                  ))))),
                     (int16)CONCAT214(param_3,CONCAT68(CONCAT24(param_1,CONCAT22(param_1_00,
                                                                                 in_stack_00000002))
                                                       ,CONCAT26(in_stack_00000000,
                                                                 CONCAT24(unaff_BP,CONCAT22(puVar11,
                                                  piVar10))))));
          puVar4 = puVar4 + 1;
        } while ((int)puVar4 < (int)(PTR_DAT_10a8_0000_10a8_884e + 10));
      }
      FILLRECT((int16 *)PTR_DAT_10a8_0000_10a8_0010,(HDC16)&stack0xfff2,unaff_SS,
               (HBRUSH16)__return_storage_ptr__);
      SELECTCLIPRGN((int16 *)0x0,(HDC16)__return_storage_ptr__,unaff_SI);
      RELEASEDC(__return_storage_ptr__,param_5,unaff_SI);
    }
  }
  return (ulong)in_DX << 0x10;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

ulong __stdcall16far
ORDERINFODLG(undefined2 param_1_00,int param_2,uint param_3,int param_4,undefined2 param_5)

{
  uint in_DX;
  undefined2 unaff_BP;
  RECT16 *unaff_SS;
  COLORREF CVar1;
  undefined2 in_stack_00000000;
  undefined2 in_stack_00000002;
  undefined2 uVar2;
  undefined8 in_stack_0000fff6;

  if (param_4 == 0x14) {
    GETCLIENTRECT((HWND16)&stack0xfff6,(RECT16 *)CONCAT22(param_5,unaff_SS));
    FILLRECT((int16 *)PTR_DAT_10a8_0000_10a8_0010,(HDC16)&stack0xfff6,unaff_SS,param_3);
    param_3 = in_DX;
LAB_1008_5150:
    return CONCAT22(param_3,1);
  }
  if (param_4 == 0x19) {
    if (param_2 == 6) {
      uVar2 = 0xf;
      CVar1 = GETSYSCOLOR((int16)CONCAT214(in_stack_00000000,
                                           CONCAT212(unaff_BP,CONCAT84(in_stack_0000fff6,
                                                                       CONCAT22(param_3,0xf)))));
      CVar1 = SETBKCOLOR((HDC16)CVar1.value,CONCAT22(uVar2,(int)(CVar1.value >> 0x10)));
      return CVar1.value & 0xffff0000 | ZEXT24(PTR_DAT_10a8_0000_10a8_0010);
    }
  }
  else if ((param_4 == 0x111) && ((param_3 == 2 || (in_DX = param_3, param_3 == 1)))) {
    ENDDIALOG(1,(int16)CONCAT214(in_stack_00000002,
                                 CONCAT212(in_stack_00000000,
                                           CONCAT210(unaff_BP,CONCAT82(in_stack_0000fff6,param_5))))
             );
    goto LAB_1008_5150;
  }
  return (ulong)in_DX << 0x10;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

void __cdecl16far FUN_1008_5196(HWND16 param_1,int param_2)

{
  bool16 bVar1;
  HMENU16 HVar2;
  undefined2 unaff_BP;
  undefined2 unaff_SI;
  int iVar3;
  undefined4 in_stack_00000000;
  undefined *in_stack_0000fffa;

  if (PTR_DAT_10a8_0000_10a8_00c6 != (undefined *)0x0) {
    in_stack_0000fffa = PTR_DAT_10a8_0000_10a8_00c6;
    bVar1 = ISZOOMED((HWND16)PTR_DAT_10a8_0000_10a8_00c6);
    if (bVar1 != 0) {
      iVar3 = 1;
      goto LAB_1008_51b6;
    }
  }
  iVar3 = 0;
LAB_1008_51b6:
  HVar2 = GETMENU(param_1);
  GETSUBMENU(iVar3 + param_2,
             (int16)CONCAT88(CONCAT26(param_2,CONCAT24(param_1,in_stack_00000000)),
                             CONCAT26(unaff_BP,CONCAT24(unaff_SI,CONCAT22(in_stack_0000fffa,HVar2)))
                            ));
  return;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

undefined2 __cdecl16far FUN_1008_51cc(undefined2 param_1_00,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined2 unaff_BP;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined2 in_stack_00000000;
  WPARAM16 in_stack_00000002;

  if ((PTR_DAT_10a8_0000_10a8_00c4 != (undefined *)0x0) && ((param_2 == 0x2b || (param_2 == 0x2d))))
  {
    puVar1 = (undefined *)GETFOCUS();
    if ((PTR_DAT_10a8_0000_10a8_00cc == (undefined *)0x0) || (puVar1 != PTR_DAT_10a8_0000_10a8_87f0)
       ) {
      SENDMESSAGE((HWND16)param_3,
                  (uint16)CONCAT214(in_stack_00000000,
                                    CONCAT212(unaff_BP,CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT26
                                                  (PTR_DAT_10a8_0000_10a8_00c4,
                                                   CONCAT15(1,CONCAT14(2,CONCAT22(param_2,(int)((
                                                  ulong)param_3 >> 0x10))))))))),in_stack_00000002,
                  _param_1_00);
      return 1;
    }
  }
  return 0;
}



undefined2 __cdecl16far
FUN_1008_5218(undefined2 param_1_00,int param_2,uint param_3,undefined4 param_4)

{
  char cVar1;
  undefined *puVar2;
  int *piVar3;
  undefined2 unaff_BP;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined2 unaff_SS;
  POINT16 *in_stack_0000fff2;
  undefined2 in_stack_0000fff4;
  undefined *in_stack_0000fffa;
  undefined2 in_stack_0000fffc;

  if ((param_3 == 0x10) && (PTR_DAT_10a8_0000_10a8_00c4 != (undefined *)0x0)) {
    in_stack_0000fff2 = (POINT16 *)&stack0xfffa;
    GETCURSORPOS(in_stack_0000fff2);
    puVar2 = (undefined *)WINDOWFROMPOINT(SUB21(in_stack_0000fffa,0));
    in_stack_0000fff4 = unaff_SS;
    if (PTR_DAT_10a8_0000_10a8_00c4 == puVar2) {
      SENDMESSAGE(0,(uint16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(unaff_SS,CONCAT28(
                                                  in_stack_0000fff2,
                                                  CONCAT26(puVar2,(uint6)CONCAT14(0x20,ZEXT24(puVar2
                                                  ) << 0x10)))))),(WPARAM16)in_stack_0000fffa,
                  CONCAT22(unaff_BP,in_stack_0000fffc));
      in_stack_0000fff4 = unaff_SS;
    }
  }
  if (param_2 != 0x100) {
    return 0;
  }
  if (((((param_3 != 8) && (param_3 != 0x2e)) && (param_3 != 0x28)) &&
      ((param_3 != 0x26 && (param_3 != 0x24)))) && (param_3 != 0x23)) {
    return 0;
  }
  puVar2 = (undefined *)GETFOCUS();
  if (PTR_DAT_10a8_0000_10a8_00cc != (undefined *)0x0) {
    piVar3 = (int *)&PTR_DAT_10a8_0000_10a8_8846;
    do {
      if ((undefined *)*piVar3 == puVar2) {
        return 0;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 < (int *)&PTR_DAT_10a8_0000_10a8_884c);
    if (PTR_DAT_10a8_0000_10a8_82c0 == puVar2) {
      return 0;
    }
    if (PTR_DAT_10a8_0000_10a8_8346 == puVar2) {
      return 0;
    }
    if (PTR_DAT_10a8_0000_10a8_87f0 == puVar2) {
      return 0;
    }
    if (PTR_DAT_10a8_0000_10a8_8308 == puVar2) {
      return 0;
    }
    if (PTR_DAT_10a8_0000_10a8_0aa4 == puVar2) {
      return 0;
    }
    if (PTR_DAT_10a8_0000_10a8_83a4 == puVar2) {
      return 0;
    }
    if (PTR_DAT_10a8_0000_10a8_82c0 == puVar2) {
      return 0;
    }
    in_stack_0000fffa = puVar2;
    if (PTR_DAT_10a8_0000_10a8_8398 == puVar2) {
      return 0;
    }
  }
  if (param_3 == 0x2e) {
LAB_1008_52f8:
    if (PTR_DAT_10a8_0000_10a8_7b4c == (undefined *)&DAT_10a8_0002) {
      FUN_1028_4cea(8);
    }
  }
  else {
    if (0x2e < param_3) {
      return 0;
    }
    cVar1 = (char)param_3;
    if (cVar1 < '%') {
      if (cVar1 < '#') {
        if (cVar1 != '\b') {
          return 0;
        }
        goto LAB_1008_52f8;
      }
    }
    else if ((cVar1 != '&') && (cVar1 != '(')) {
      return 0;
    }
    if (puVar2 == PTR_DAT_10a8_0000_10a8_83a0) {
      return 0;
    }
    SENDMESSAGE((HWND16)param_4,
                (uint16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(in_stack_0000fff4,
                                                                        CONCAT28(in_stack_0000fff2,
                                                                                 CONCAT26(
                                                  PTR_DAT_10a8_0000_10a8_00cc,
                                                  CONCAT15(1,(uint5)CONCAT22(param_3,(int)((ulong)
                                                  param_4 >> 0x10)))))))),
                (WPARAM16)in_stack_0000fffa,CONCAT22(unaff_BP,in_stack_0000fffc));
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl16far FUN_1008_532c(undefined *param_1,int param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  char *pcVar3;
  byte *pbVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  bool16 bVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  void *unaff_SI;
  undefined4 *puVar12;
  undefined2 unaff_DI;
  char *pcVar13;
  undefined2 *puVar14;
  undefined4 *puVar15;
  undefined2 *puVar16;
  byte *pbVar17;
  undefined2 unaff_SS;
  undefined4 in_stack_0000fcb4;
  WPARAM16 in_stack_0000fcb8;
  LPARAM in_stack_0000fcba;
  undefined2 in_stack_0000fcbe;
  HWND16 in_stack_0000fcc0;
  HMENU16 in_stack_0000fcc2;
  HINSTANCE16 in_stack_0000fcc4;
  LPVOID in_stack_0000fcc6;
  undefined4 local_24c;
  byte local_14d;
  WORD local_14c [128];
  undefined4 local_4c;
  undefined *local_48;
  undefined4 *local_44;
  int local_18;
  int local_16;

  if (((uint)PTR_DAT_10a8_0000_10a8_56fa & 1) == 0) {
    local_14c[0]._0_1_ = 0;
    if (param_2 == 0) {
      puVar15 = &local_24c;
      puVar12 = (undefined4 *)s_Stars__Game_Files___M____HST___R_10a8_0465;
      for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar6 = puVar15;
        puVar15 = puVar15 + 1;
        puVar2 = puVar12;
        puVar12 = puVar12 + 1;
        *puVar6 = *puVar2;
      }
      *(undefined *)puVar15 = *(undefined *)puVar12;
    }
    else {
      puVar15 = &local_24c;
      puVar12 = (undefined4 *)s_Stars__Game_Files___R__All_Files_10a8_043f;
      for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar6 = puVar15;
        puVar15 = puVar15 + 1;
        puVar2 = puVar12;
        puVar12 = puVar12 + 1;
        *puVar6 = *puVar2;
      }
      *(undefined2 *)puVar15 = *(undefined2 *)puVar12;
    }
    iVar9 = 0;
    while ((char)local_24c != '\0') {
      if (*(char *)((int)&local_24c + iVar9) == '|') {
        *(undefined *)((int)&local_24c + iVar9) = 0;
      }
      local_24c._0_1_ = *(char *)((int)&local_24c + iVar9 + 1);
      iVar9 = iVar9 + 1;
    }
    puVar15 = &local_4c;
    for (iVar9 = 0x12; iVar9 != 0; iVar9 = iVar9 + -1) {
      puVar2 = puVar15;
      puVar15 = puVar15 + 1;
      *puVar2 = 0;
    }
    local_4c._0_2_ = 0x48;
    local_4c._2_2_ = 0;
    local_48 = param_1;
    local_44 = &local_24c;
    bVar7 = GETOPENFILENAME(CONCAT13((char)((uint)unaff_SS >> 8),CONCAT12((char)unaff_SS,&local_4c))
                           );
    if (bVar7 == 0) {
      return 0;
    }
    PTR_DAT_10a8_0000_10a8_0138._0_1_ = 0;
    iVar9 = FUN_1008_562e((char *)(&local_14d + local_18 + 1),(uint)(param_2 == 0));
    if (param_2 != 0) {
      if (0 < iVar9) {
        pbVar17 = &local_14d + local_18 + 1;
        uVar10 = 0xffff;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pbVar4 = pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (*pbVar4 != 0);
        uVar10 = ~uVar10;
        puVar16 = (undefined2 *)(pbVar17 + -uVar10);
        puVar14 = (undefined2 *)&PTR_DAT_10a8_0000_10a8_48ca;
        for (uVar11 = uVar10 >> 1; uVar11 != 0; uVar11 = uVar11 - 1) {
          puVar5 = puVar14;
          puVar14 = puVar14 + 1;
          puVar1 = puVar16;
          puVar16 = puVar16 + 1;
          *puVar5 = *puVar1;
        }
        for (uVar10 = (uint)((uVar10 & 1) != 0); uVar10 != 0; uVar10 = uVar10 - 1) {
          puVar5 = puVar14;
          puVar14 = (undefined2 *)((int)puVar14 + 1);
          puVar1 = puVar16;
          puVar16 = (undefined2 *)((int)puVar16 + 1);
          *(undefined *)puVar5 = *(undefined *)puVar1;
        }
      }
      return iVar9;
    }
    if (iVar9 != 0) {
      if (iVar9 != -1) {
        FUN_1078_0000(param_1,(undefined *)0x0,0);
        return 0;
      }
      return -1;
    }
    (&local_14d)[local_16] = 0;
    FUN_1040_190c();
    pbVar17 = &local_14d + 1;
    uVar10 = 0xffff;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pbVar4 = pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (*pbVar4 != 0);
    uVar10 = ~uVar10;
    puVar16 = (undefined2 *)(pbVar17 + -uVar10);
    puVar14 = (undefined2 *)&DAT_10a8_85dc;
    for (uVar11 = uVar10 >> 1; uVar11 != 0; uVar11 = uVar11 - 1) {
      puVar5 = puVar14;
      puVar14 = puVar14 + 1;
      puVar1 = puVar16;
      puVar16 = puVar16 + 1;
      *puVar5 = *puVar1;
    }
    for (uVar10 = (uint)((uVar10 & 1) != 0); uVar10 != 0; uVar10 = uVar10 - 1) {
      puVar5 = puVar14;
      puVar14 = (undefined2 *)((int)puVar14 + 1);
      puVar1 = puVar16;
      puVar16 = (undefined2 *)((int)puVar16 + 1);
      *(undefined *)puVar5 = *(undefined *)puVar1;
    }
  }
  else {
    pcVar13 = (char *)&DAT_10a8_85dc;
    puVar16 = (undefined2 *)(&local_14d + 1);
    uVar10 = 0xffff;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar3 = pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (*pcVar3 != '\0');
    uVar10 = ~uVar10;
    puVar14 = (undefined2 *)(pcVar13 + -uVar10);
    for (uVar11 = uVar10 >> 1; uVar11 != 0; uVar11 = uVar11 - 1) {
      puVar5 = puVar16;
      puVar16 = puVar16 + 1;
      puVar1 = puVar14;
      puVar14 = puVar14 + 1;
      *puVar5 = *puVar1;
    }
    for (uVar10 = (uint)((uVar10 & 1) != 0); uVar10 != 0; uVar10 = uVar10 - 1) {
      puVar5 = puVar16;
      puVar16 = (undefined2 *)((int)puVar16 + 1);
      puVar1 = puVar14;
      puVar14 = (undefined2 *)((int)puVar14 + 1);
      *(undefined *)puVar5 = *(undefined *)puVar1;
    }
    pcVar13 = FUN_10a0_0514((char *)&DAT_10a8_85dc,'\\');
    *pcVar13 = '\0';
    pcVar13 = FUN_10a0_0514((char *)(&local_14d + 1),'.');
    if (pcVar13 == (char *)0x0) {
      FUN_1008_4138(param_1);
      return 0;
    }
    *pcVar13 = '\0';
    local_16 = (int)pcVar13 - (int)&local_14d;
    PTR_DAT_10a8_0000_10a8_0a30 = (undefined *)&DAT_10a8_0001;
  }
  puVar8 = (undefined *)FUN_1040_02ec((VA_LIST16)(&local_14d + 1),&local_14d + local_16 + 1);
  if (puVar8 == (undefined *)0x0) {
    if (((uint)PTR_DAT_10a8_0000_10a8_56fa & 1) != 0) {
      PTR_DAT_10a8_0000_10a8_0a30 = puVar8;
      PTR_DAT_10a8_0000_10a8_56fa = puVar8;
    }
  }
  else {
    if (((uint)PTR_DAT_10a8_0000_10a8_56fa & 1) != 0) {
      PTR_DAT_10a8_0000_10a8_0a30 = (undefined *)0x0;
      PTR_DAT_10a8_0000_10a8_56fa = (undefined *)((uint)PTR_DAT_10a8_0000_10a8_56fa & 0xfffe);
      pcVar13 = FUN_10a0_0514((char *)(&local_14d + 1),'\\');
      if (pcVar13 != (char *)0x0) {
        iVar9 = (int)pcVar13 - (int)(&local_14d + 1);
        FUN_10a0_0352((char *)&PTR_DAT_10a8_0000_10a8_0138,(char *)(&local_14d + 1),iVar9);
        *(undefined *)(iVar9 + 0x138) = 0;
      }
      if (PTR_DAT_10a8_0000_10a8_56fc < PTR_DAT_10a8_0000_10a8_0042) {
        PTR_DAT_10a8_0000_10a8_56fa = (undefined *)((uint)PTR_DAT_10a8_0000_10a8_56fa & 0xffef);
      }
    }
    _PTR_DAT_10a8_0000_10a8_7b4c = 0;
    _PTR_DAT_10a8_0000_10a8_7b50 = 0xffffffff;
    PTR_DAT_10a8_0000_10a8_7b5a = (undefined *)0x0;
    PTR_DAT_10a8_0000_10a8_7b58 = (undefined *)0x0;
    _PTR_DAT_10a8_0000_10a8_7b5e = 0xffffffff;
    PTR_DAT_10a8_0000_10a8_7b5c = (undefined *)0xffff;
    PTR_DAT_10a8_0000_10a8_07a0 = (undefined *)0x0;
    window_op_1008_0ede();
    if (PTR_DAT_10a8_0001_10a8_00c0 != (undefined *)0xffff) {
      uVar10 = (uint)PTR_DAT_10a8_0000_10a8_56fa & 0xe0;
      SENDMESSAGE(0,(uint16)CONCAT412(in_stack_0000fcb4,
                                      CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT17((char)((uint)
                                                  PTR_DAT_10a8_0000_10a8_58b4 >> 8),
                                                  CONCAT16((char)PTR_DAT_10a8_0000_10a8_58b4,
                                                           0x1110fa10000))))),in_stack_0000fcb8,
                  in_stack_0000fcba);
      if (((uVar10 == 0) || (((uint)PTR_DAT_10a8_0000_10a8_56fa & 0xe0) != 0)) &&
         (PTR_DAT_10a8_0000_10a8_56fa = (undefined *)((uint)PTR_DAT_10a8_0000_10a8_56fa & 0xff1f),
         PTR_DAT_10a8_0000_10a8_7d52 != (undefined *)0x0)) {
        FUN_1008_22ba();
      }
      return 1;
    }
    if ((PTR_DAT_10a8_0000_10a8_0242 != (undefined *)0x0) &&
       (PTR_DAT_10a8_0000_10a8_0244 == (undefined *)0x0)) {
      PTR_DAT_10a8_0000_10a8_0244 = (undefined *)&DAT_10a8_0001;
      DESTROYWINDOW((HWND16)PTR_DAT_10a8_0000_10a8_0242);
      PTR_DAT_10a8_0000_10a8_0242 = (undefined *)0x0;
    }
    FUN_1008_57b8(unaff_SI,CONCAT212(in_stack_0000fcbe,
                                     CONCAT48(in_stack_0000fcba,
                                              CONCAT26(in_stack_0000fcb8,
                                                       CONCAT42(in_stack_0000fcb4,unaff_DI)))),
                  in_stack_0000fcc0,in_stack_0000fcc2,in_stack_0000fcc4,in_stack_0000fcc6);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __cdecl16far FUN_1008_562e(char *param_1,int param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int16 *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined4 local_94 [3];
  long local_88;
  int local_1e [9];
  undefined2 local_c;
  undefined *local_a;
  undefined *local_8;
  undefined4 local_6;

  local_a = PTR_DAT_10a8_0000_10a8_0a30;
  local_c = 0;
  PTR_DAT_10a8_0000_10a8_0a30 = (undefined *)&DAT_10a8_0001;
  local_8 = PTR_DAT_10a8_0000_10a8_002e;
  PTR_DAT_10a8_0000_10a8_002e = (undefined *)local_1e;
  iVar6 = FUN_10a0_0704(local_1e);
  if (iVar6 == 0) {
    FUN_1040_1ece(param_1,0x20);
    FUN_1040_1e24();
    if ((DAT_10a8_59a9 & 0xfc) == 0x20) {
      uVar9 = _DAT_10a8_7d6c >> 8 & 0xf0;
      if (((uVar9 == 0x10) ||
          ((uVar9 << 8 < (uint)s_backup_d_10a8_1001 && (0x77f < (_DAT_10a8_7d6c & 0xfe0))))) &&
         ((uVar9 != 0x10 || ((_DAT_10a8_7d6c & 0xfe0) < 0x280)))) {
        _DAT_10a8_0a32 = _DAT_10a8_7d6c;
        FUN_1040_1e24();
        if ((DAT_10a8_59a9 & 0xfc) == 0x18) {
          FUN_1040_01d4(local_94,(undefined2 *)&DAT_10a8_7d64);
          FUN_1040_1e24();
          if ((DAT_10a8_59a9 & 0xfc) == 0) {
            local_6 = _PTR_DAT_10a8_0000_10a8_024c;
            _PTR_DAT_10a8_0000_10a8_024c = local_88;
            if ((param_2 == 0) || (piVar7 = FUN_1010_26a0(), piVar7 != (int16 *)0x0)) {
              _PTR_DAT_10a8_0000_10a8_024c = local_6;
              if (local_88 == 0) {
                PTR_DAT_10a8_0000_10a8_48ba._0_1_ = 0;
              }
              else {
                pcVar12 = (char *)&PTR_DAT_10a8_0000_10a8_573c;
                uVar9 = 0xffff;
                do {
                  if (uVar9 == 0) break;
                  uVar9 = uVar9 - 1;
                  pcVar3 = pcVar12;
                  pcVar12 = pcVar12 + 1;
                } while (*pcVar3 != '\0');
                uVar9 = ~uVar9;
                puVar13 = (undefined2 *)(pcVar12 + -uVar9);
                puVar14 = (undefined2 *)&PTR_DAT_10a8_0000_10a8_48ba;
                for (uVar10 = uVar9 >> 1; uVar10 != 0; uVar10 = uVar10 - 1) {
                  puVar4 = puVar14;
                  puVar14 = puVar14 + 1;
                  puVar1 = puVar13;
                  puVar13 = puVar13 + 1;
                  *puVar4 = *puVar1;
                }
                for (uVar9 = (uint)((uVar9 & 1) != 0); uVar9 != 0; uVar9 = uVar9 - 1) {
                  puVar4 = puVar14;
                  puVar14 = (undefined2 *)((int)puVar14 + 1);
                  puVar1 = puVar13;
                  puVar13 = (undefined2 *)((int)puVar13 + 1);
                  *(undefined *)puVar4 = *(undefined *)puVar1;
                }
              }
              puVar8 = (undefined4 *)&PTR_DAT_10a8_0000_10a8_8166;
              puVar11 = local_94;
              for (iVar6 = 0x1d; iVar6 != 0; iVar6 = iVar6 + -1) {
                puVar5 = puVar8;
                puVar8 = puVar8 + 1;
                puVar2 = puVar11;
                puVar11 = puVar11 + 1;
                *puVar5 = *puVar2;
              }
              *(undefined2 *)puVar8 = *(undefined2 *)puVar11;
              uVar9 = 0xffff;
              do {
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1;
                pcVar3 = param_1;
                param_1 = param_1 + 1;
              } while (*pcVar3 != '\0');
              uVar9 = ~uVar9;
              puVar13 = (undefined2 *)(param_1 + -uVar9);
              puVar14 = (undefined2 *)&PTR_DAT_10a8_0000_10a8_48ca;
              for (uVar10 = uVar9 >> 1; uVar10 != 0; uVar10 = uVar10 - 1) {
                puVar4 = puVar14;
                puVar14 = puVar14 + 1;
                puVar1 = puVar13;
                puVar13 = puVar13 + 1;
                *puVar4 = *puVar1;
              }
              for (uVar9 = (uint)((uVar9 & 1) != 0); uVar9 != 0; uVar9 = uVar9 - 1) {
                puVar4 = puVar14;
                puVar14 = (undefined2 *)((int)puVar14 + 1);
                puVar1 = puVar13;
                puVar13 = (undefined2 *)((int)puVar13 + 1);
                *(undefined *)puVar4 = *(undefined *)puVar1;
              }
              FUN_1040_1f9c();
              PTR_DAT_10a8_0000_10a8_0a30 = local_a;
              PTR_DAT_10a8_0000_10a8_002e = local_8;
              return 1;
            }
            _PTR_DAT_10a8_0000_10a8_024c = local_6;
            local_c = 0xffff;
          }
        }
      }
    }
  }
  FUN_1040_1f9c();
  PTR_DAT_10a8_0000_10a8_002e = local_8;
  PTR_DAT_10a8_0000_10a8_0a30 = local_a;
  return local_c;
}


/*
Unable to decompile 'FUN_1008_57b8'
Cause:
Low-level Error: Overlapping input varnodes
*/


// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: stack

int16 * __cdecl16far FUN_1008_58e4(HWND16 param_1,int16 *param_2,undefined6 param_3)

{
  qword qVar1;
  int16 *piVar2;
  int16 *piVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined2 uVar6;
  int16 *hdc;
  HWND16 HVar7;
  uint uVar8;
  HWND16 HVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined2 unaff_BP;
  VA_LIST16 unaff_SI;
  HRGN16 unaff_DI;
  undefined *puVar12;
  int iVar13;
  undefined2 unaff_SS;
  COLORREF CVar14;
  dword dVar15;
  undefined4 in_stack_00000000;
  undefined8 in_stack_0000000e;
  HDC16 HVar16;
  undefined2 uVar17;
  undefined *puVar18;
  VA_LIST16 valist;
  int iVar19;
  int16 *piVar20;
  int in_stack_0000ffe2;
  undefined2 in_stack_0000ffe4;
  undefined2 in_stack_0000ffe6;
  undefined2 in_stack_0000ffe8;
  undefined2 in_stack_0000ffea;
  undefined2 in_stack_0000ffec;
  HDC16 hdc_00;
  undefined2 in_stack_0000fff2;
  undefined2 in_stack_0000fff4;
  undefined2 uVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined2 in_stack_0000fff8;
  int *piVar24;
  undefined2 in_stack_0000fffa;
  uint uVar25;
  undefined2 in_stack_0000fffc;
  int iVar26;

  piVar3 = param_2;
  if (param_2 == (int16 *)0x0) {
    piVar3 = (int16 *)GETDC(param_1);
  }
  piVar2 = SETBKMODE((int16 *)&DAT_10a8_0002,(HDC16)piVar3,
                     (int16)CONCAT214(in_stack_0000ffec,
                                      CONCAT212(in_stack_0000ffea,
                                                CONCAT210(in_stack_0000ffe8,
                                                          CONCAT28(in_stack_0000ffe6,
                                                                   CONCAT26(in_stack_0000ffe4,
                                                                            CONCAT24(
                                                  in_stack_0000ffe2,CONCAT22(unaff_DI,unaff_SI))))))
                                     ));
  CVar14 = SETBKCOLOR((HDC16)_DAT_10a8_5714,CONCAT22(piVar3,(int)((ulong)_DAT_10a8_5714 >> 0x10)));
  uVar11 = (undefined2)(CVar14.value >> 0x10);
  hdc_00 = (HDC16)CVar14.value;
  SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_59c6,(HRGN16)piVar3,(HRGN16)unaff_SI,unaff_DI,
               (int16)CONCAT214(uVar11,CONCAT212(hdc_00,CONCAT210(in_stack_0000ffec,
                                                                  CONCAT28(piVar2,CONCAT26(
                                                  in_stack_0000ffe8,
                                                  CONCAT24(in_stack_0000ffe6,
                                                           CONCAT22(in_stack_0000ffe4,
                                                                    in_stack_0000ffe2))))))));
  dVar15 = GETTEXTEXTENT(3,(LPCSTR)0x10a8049d,
                         (int16)CONCAT214(piVar2,CONCAT212(in_stack_0000ffe8,
                                                           CONCAT210(in_stack_0000ffe6,
                                                                     CONCAT28(in_stack_0000ffe4,
                                                                              CONCAT26(
                                                  in_stack_0000ffe2,
                                                  CONCAT24(unaff_DI,CONCAT22(unaff_SI,piVar3))))))))
  ;
  puVar12 = PTR_DAT_10a8_0000_10a8_5794 + (int)dVar15 + 10;
  puVar22 = (undefined *)&PTR_DAT_10a8_0000_10a8_0030;
  SETRECT((RECT16 *)CONCAT22(PTR_DAT_10a8_0000_10a8_5794 + 7,PTR_DAT_10a8_0000_10a8_5794 + 0x31),
          (int16)CONCAT214(in_stack_0000ffe4,
                           CONCAT212(in_stack_0000ffe2,
                                     CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT26(unaff_SS,CONCAT24
                                                  (&stack0xffe2,0x60030)))))),
          (int16)CONCAT214(in_stack_0000fff4,
                           CONCAT212(in_stack_0000fff2,
                                     CONCAT210(uVar11,CONCAT28(hdc_00,CONCAT26(in_stack_0000ffec,
                                                                               CONCAT24(piVar2,
                                                  CONCAT22(in_stack_0000ffe8,in_stack_0000ffe6))))))
                          ),
          (int16)CONCAT610(CONCAT24(param_1,in_stack_00000000),
                           CONCAT28(unaff_BP,CONCAT26(in_stack_0000fffc,
                                                      CONCAT24(in_stack_0000fffa,
                                                               CONCAT22(in_stack_0000fff8,0x30))))),
          (int16)CONCAT88(in_stack_0000000e,CONCAT62(param_3,param_2)));
  uVar21 = 0;
  if (0 < (int)PTR_DAT_10a8_0002_10a8_0038) {
    piVar24 = (int *)0x8fc0;
    iVar13 = 0;
    piVar20 = piVar3;
    puVar23 = puVar22;
    do {
      FUN_1008_9946((HRGN16)piVar20,(int *)&stack0xffe2,(int16 *)PTR_DAT_10a8_0000_10a8_58a6,
                    (undefined1  [10])
                    CONCAT28(in_stack_0000ffe6,
                             CONCAT26(in_stack_0000ffe4,
                                      CONCAT24(in_stack_0000ffe2,CONCAT22(unaff_DI,unaff_SI)))),
                    in_stack_0000ffe8,piVar2,piVar20,hdc_00,uVar11);
      iVar19 = 0;
      piVar3 = _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x4a210a8,
                         (LPCSTR)CONCAT22(iVar13 + 1,0x10a8),(VA_LIST16)0x0);
      FUN_1018_55f6(piVar20,(int)puVar12,(int)puVar22,(int)&DAT_10a8_86de,piVar3,iVar19,
                    CONCAT22(unaff_DI,unaff_SI),in_stack_0000ffe2,
                    CONCAT212(uVar11,CONCAT210(hdc_00,CONCAT28(piVar20,CONCAT26(piVar2,CONCAT24(
                                                  in_stack_0000ffe8,
                                                  CONCAT22(in_stack_0000ffe6,in_stack_0000ffe4))))))
                   );
      if (*piVar24 == 0) {
        HVar16 = 0x7f00;
      }
      else {
        HVar16 = 0x7f;
      }
      SETTEXTCOLOR(HVar16,(COLORREF)(ZEXT24(piVar20) << 0x10));
      if (*piVar24 == 0) {
        uVar4 = 0x4b1;
      }
      else {
        uVar4 = 0x4a7;
      }
      iVar26 = (int)s_From___s_c_c_10a8_10a2 + 6;
      puVar5 = puVar12 + 4;
      iVar19 = (int)s_From___s_c_c_10a8_10a2 + 6;
      uVar17 = SUB42(&DAT_10a8_86de,0);
      puVar18 = puVar22;
      piVar3 = piVar20;
      uVar6 = FUN_1010_0792(iVar13,1,1,1,0,0);
      hdc = _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x4bb10a8,(LPCSTR)CONCAT22(uVar6,0x10a8),
                      (VA_LIST16)((int)s_From___s_c_c_10a8_10a2 + 6));
      TEXTOUT((HDC16)hdc,
              (int16)CONCAT214(in_stack_0000ffe2,
                               CONCAT212(unaff_DI,CONCAT210(unaff_SI,CONCAT28(piVar20,CONCAT26(
                                                  puVar5,CONCAT24(puVar18,CONCAT22(iVar19,uVar17))))
                                                  ))),
              (int16)CONCAT214(puVar12,CONCAT212(uVar11,CONCAT210(hdc_00,CONCAT28(piVar3,CONCAT26(
                                                  piVar2,CONCAT24(in_stack_0000ffe8,
                                                                  CONCAT22(in_stack_0000ffe6,
                                                                           in_stack_0000ffe4))))))),
              (LPCSTR)CONCAT22(puVar23,uVar21),
              (int16)CONCAT214(param_2,CONCAT68(CONCAT24(param_1,in_stack_00000000),
                                                CONCAT26(unaff_BP,CONCAT24(iVar26,CONCAT22(uVar4,
                                                  piVar24))))));
      SETTEXTCOLOR((HDC16)_PTR_DAT_10a8_0000_10a8_7ac8,
                   (COLORREF)CONCAT22(piVar3,(int)((ulong)_PTR_DAT_10a8_0000_10a8_7ac8 >> 0x10)));
      OFFSETRECT((RECT16 *)ZEXT24(PTR_DAT_10a8_0000_10a8_5794 + 4),
                 (int16)CONCAT214(in_stack_0000ffe8,
                                  CONCAT212(in_stack_0000ffe6,
                                            CONCAT210(in_stack_0000ffe4,
                                                      CONCAT28(in_stack_0000ffe2,
                                                               CONCAT26(unaff_DI,CONCAT24(unaff_SI,
                                                  CONCAT22(unaff_SS,&stack0xffe2))))))),
                 (int16)CONCAT214(piVar24,CONCAT212(puVar23,CONCAT210(uVar21,CONCAT28(puVar12,
                                                  CONCAT26(uVar11,CONCAT24(hdc_00,CONCAT22(piVar3,
                                                  piVar2))))))));
      puVar22 = puVar22 + (int)(PTR_DAT_10a8_0000_10a8_5794 + 4);
      piVar24 = piVar24 + 1;
      iVar13 = iVar13 + 1;
      piVar20 = piVar3;
    } while (iVar13 < (int)PTR_DAT_10a8_0002_10a8_0038);
  }
  _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x4c910a8,
            (LPCSTR)CONCAT22(PTR_DAT_10a8_0000_10a8_0042 + 0x961,0x10a8),unaff_SI);
  HVar7 = GETDLGITEM(0x7e0,(int16)CONCAT214(piVar2,CONCAT212(in_stack_0000ffe8,
                                                             CONCAT210(in_stack_0000ffe6,
                                                                       CONCAT28(in_stack_0000ffe4,
                                                                                CONCAT26(
                                                  in_stack_0000ffe2,
                                                  CONCAT24(unaff_DI,CONCAT22(unaff_SI,param_1)))))))
                    );
  iVar13 = (int)s_From___s_c_c_10a8_10a2 + 6;
  valist = (VA_LIST16)&DAT_10a8_86de;
  SETWINDOWTEXT((HWND16)&DAT_10a8_86de,CONCAT22(HVar7,0x10a8));
  uVar21 = 1000;
  uVar4 = 0;
  dVar15 = GETTICKCOUNT();
  qVar1 = (qword)CONCAT22(((int)(dVar15 >> 0x10) - (int)PTR_DAT_10a8_0000_10a8_00d6) -
                          (uint)((undefined *)dVar15 < PTR_DAT_10a8_0000_10a8_00d4),
                          (int)(undefined *)dVar15 - (int)PTR_DAT_10a8_0000_10a8_00d4) /
          (qword)CONCAT22(uVar4,uVar21);
  uVar10 = (ulong)qVar1;
  uVar25 = (uint)qVar1;
  if (uVar10 < 0x3c) {
    _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x4cc10a8,(LPCSTR)CONCAT22(uVar25,0x10a8),valist);
  }
  else {
    uVar8 = (uint)((uVar10 & 0xffff0000 | (ulong)uVar25) / 0x3c);
    if (uVar8 < 0x3c) {
      _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x4d710a8,(LPCSTR)CONCAT22(uVar8,0x10a8),
                (VA_LIST16)(uVar25 + uVar8 * -0x3c));
    }
    else {
      uVar25 = uVar8 / 0x3c;
      if (uVar25 < 0x18) {
        _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x4df10a8,(LPCSTR)CONCAT22(uVar25,0x10a8),
                  (VA_LIST16)(uVar8 % 0x3c));
      }
      else {
        _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x4ec10a8,
                  (LPCSTR)(ulong)CONCAT12((char)(uVar25 / 0x18),0x10a8),(VA_LIST16)(uVar25 % 0x18));
      }
    }
  }
  HVar9 = GETDLGITEM(0x7e1,(int16)CONCAT214(in_stack_0000ffe4,
                                            CONCAT212(in_stack_0000ffe2,
                                                      CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT26(
                                                  HVar7,CONCAT24(iVar13,CONCAT22(valist,param_1)))))
                                                  )));
  iVar19 = (int)s_From___s_c_c_10a8_10a2 + 6;
  HVar16 = (HDC16)&DAT_10a8_86de;
  SETWINDOWTEXT((HWND16)&DAT_10a8_86de,CONCAT22(HVar9,0x10a8));
  SETBKMODE(piVar2,(HDC16)piVar3,
            (int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(HVar7,CONCAT28(iVar13,CONCAT26(
                                                  valist,CONCAT24(HVar9,CONCAT22(iVar19,HVar16))))))
                            ));
  CVar14 = SETBKCOLOR(hdc_00,CONCAT13((char)((uint)piVar3 >> 8),CONCAT12((char)piVar3,uVar11)));
  piVar2 = (int16 *)CVar14.value;
  if (param_2 == (int16 *)0x0) {
    piVar2 = RELEASEDC(piVar3,param_1,HVar16);
  }
  return piVar2;
}
