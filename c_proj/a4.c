


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong __stdcall16far
NEWGAMEDLG2(HWND16 param_1,int param_2,uint param_3,uint param_4,undefined *param_5)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  int16 *piVar7;
  HWND16 HVar8;
  int iVar9;
  HMENU16 HVar10;
  int iVar11;
  HMENU16 HVar12;
  int iVar13;
  HMENU16 HVar14;
  HMENU16 HVar15;
  uint uVar16;
  bool16 bVar17;
  undefined *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint in_DX;
  uint *puVar22;
  undefined2 unaff_SI;
  HWND16 HVar23;
  HWND16 *pHVar24;
  int iVar25;
  HMENU16 *pHVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  undefined2 unaff_DI;
  undefined2 *puVar29;
  char *pcVar30;
  undefined2 *puVar31;
  PAINTSTRUCT16 *unaff_SS;
  COLORREF CVar32;
  undefined uVar33;
  undefined uVar34;
  undefined uVar35;
  undefined uVar36;
  undefined uVar37;
  undefined uVar38;
  undefined uVar39;
  undefined2 in_stack_0000ffbc;
  undefined2 in_stack_0000ffbe;
  undefined2 in_stack_0000ffc0;
  undefined2 in_stack_0000ffc2;
  undefined2 in_stack_0000ffc4;
  uint in_stack_0000ffc6;
  undefined2 in_stack_0000ffc8;
  word in_stack_0000ffca;
  undefined2 in_stack_0000ffcc;
  undefined2 in_stack_0000ffce;
  dword in_stack_0000ffd0;
  HMENU16 in_stack_0000ffd4;
  undefined2 in_stack_0000ffd6;
  undefined2 in_stack_0000ffd8;
  undefined4 in_stack_0000ffda;
  undefined2 in_stack_0000ffde;
  HMENU16 in_stack_0000ffe0;
  int in_stack_0000ffe2;
  undefined2 in_stack_0000ffe4;
  int in_stack_0000ffe6;
  undefined2 in_stack_0000ffe8;
  undefined2 in_stack_0000ffea;
  undefined2 in_stack_0000ffec;
  word in_stack_0000ffee;
  undefined *puVar40;
  undefined *puVar41;
  int local_10;
  int local_e;
  int local_c;
  int local_a;
  int local_8;
  uint local_6;
  HMENU16 *local_4;

  uVar33 = (undefined)((uint)unaff_SS >> 8);
  if (param_4 == 0x20) {
    GETCURSORPOS((POINT16 *)&local_6);
    SCREENTOCLIENT((HWND16)&local_6,(POINT16 *)CONCAT22(param_5,unaff_SS));
    if (((((int)PTR_DAT_10a8_0000_10a8_7a6a <= (int)local_6) &&
         ((int)local_6 < (int)(PTR_DAT_10a8_0000_10a8_7a6a + (int)PTR_DAT_10a8_0000_10a8_5794 + 1)))
        && (5 < (int)local_4)) &&
       ((in_DX = (int)((int)local_4 - 6U) % (int)(PTR_DAT_10a8_0000_10a8_5794 + 4),
        (int)((int)local_4 - 6U) / (int)(PTR_DAT_10a8_0000_10a8_5794 + 4) < 0x10 &&
        (in_DX = (int)((int)local_4 - 6U) % (int)(PTR_DAT_10a8_0000_10a8_5794 + 4),
        (int)in_DX < (int)(PTR_DAT_10a8_0000_10a8_5794 + 1))))) {
      SETCURSOR((HCURSOR16)PTR_DAT_10a8_0000_10a8_834a);
      goto LAB_1008_3570;
    }
    goto LAB_1008_3ddd;
  }
  uVar36 = SUB21(param_5,0);
  uVar34 = (undefined)((uint)param_5 >> 8);
  if (param_4 < 0x21) {
    if (param_4 == 0x19) {
      HVar23 = 0x191;
      do {
        HVar8 = GETDLGITEM(HVar23,(int16)CONCAT214(in_stack_0000ffc4,
                                                   CONCAT212(in_stack_0000ffc2,
                                                             CONCAT210(in_stack_0000ffc0,
                                                                       CONCAT28(in_stack_0000ffbe,
                                                                                CONCAT26(
                                                  in_stack_0000ffbc,
                                                  CONCAT24(unaff_DI,CONCAT22(unaff_SI,param_5)))))))
                          );
        if (HVar8 == param_1) break;
        HVar23 = HVar23 + 1;
      } while ((int)HVar23 < 0x1c1);
      if (((int)HVar23 < 0x1c1) || (param_2 == 6)) {
        uVar33 = 0xf;
        uVar36 = 0;
        CVar32 = GETSYSCOLOR((int16)CONCAT214(in_stack_0000ffc2,
                                              CONCAT212(in_stack_0000ffc0,
                                                        CONCAT210(in_stack_0000ffbe,
                                                                  CONCAT28(in_stack_0000ffbc,
                                                                           CONCAT26(unaff_DI,
                                                  CONCAT24(unaff_SI,CONCAT13((char)(param_3 >> 8),
                                                                             CONCAT12((char)param_3,
                                                                                      0xf)))))))));
        CVar32 = SETBKCOLOR((HDC16)CVar32.value,
                            CONCAT13(uVar36,CONCAT12(uVar33,(int)(CVar32.value >> 0x10))));
        return CVar32.value & 0xffff0000 | ZEXT24(PTR_DAT_10a8_0000_10a8_0010);
      }
    }
    else if (param_4 < 0x1a) {
      if ((char)param_4 == '\x0f') {
        piVar7 = (int16 *)BEGINPAINT((HWND16)&stack0xffc0,
                                     (PAINTSTRUCT16 *)CONCAT13(uVar34,CONCAT12(uVar36,unaff_SS)));
        FUN_1008_3de6((HWND16)param_5,piVar7,CONCAT24(in_stack_0000ffbc,CONCAT22(unaff_DI,unaff_SI))
                     );
        ENDPAINT((HWND16)&stack0xffc0,unaff_SS);
      }
      else {
        if ((char)param_4 != '\x14') goto LAB_1008_3ddd;
        GETCLIENTRECT((HWND16)&stack0xffe0,(RECT16 *)CONCAT13(uVar34,CONCAT12(uVar36,unaff_SS)));
        FILLRECT((int16 *)PTR_DAT_10a8_0000_10a8_0010,(HDC16)&stack0xffe0,(RECT16 *)unaff_SS,param_3
                );
      }
      goto LAB_1008_3570;
    }
    goto LAB_1008_3ddd;
  }
  if (param_4 == 0x110) {
    local_6 = (int)PTR_DAT_10a8_0000_10a8_5794 * 0x10 + 0x48;
    pHVar24 = (HWND16 *)&PTR_DAT_10a8_0002_10a8_4894;
    do {
      local_4 = (HMENU16 *)
                GETDLGITEM(*pHVar24,(int16)CONCAT214(in_stack_0000ffc4,
                                                     CONCAT212(in_stack_0000ffc2,
                                                               CONCAT210(in_stack_0000ffc0,
                                                                         CONCAT28(in_stack_0000ffbe,
                                                                                  CONCAT26(
                                                  in_stack_0000ffbc,
                                                  CONCAT24(unaff_DI,CONCAT22(unaff_SI,param_5)))))))
                          );
      GETWINDOWRECT((HWND16)&stack0xffe0,
                    (RECT16 *)CONCAT13((char)((uint)local_4 >> 8),CONCAT12((char)local_4,unaff_SS)))
      ;
      MAPWINDOWPOINTS(2,(HWND16)&stack0xffe0,(POINT16 *)unaff_SS,
                      (uint16)CONCAT214(in_stack_0000ffc2,
                                        CONCAT212(in_stack_0000ffc0,
                                                  CONCAT210(in_stack_0000ffbe,
                                                            CONCAT28(in_stack_0000ffbc,
                                                                     CONCAT26(unaff_DI,CONCAT24(
                                                  unaff_SI,ZEXT24(param_5))))))));
      OFFSETRECT((RECT16 *)(ulong)(local_6 - in_stack_0000ffe2),
                 (int16)CONCAT214(in_stack_0000ffc2,
                                  CONCAT212(in_stack_0000ffc0,
                                            CONCAT210(in_stack_0000ffbe,
                                                      CONCAT28(in_stack_0000ffbc,
                                                               CONCAT26(unaff_DI,CONCAT24(unaff_SI,
                                                  CONCAT13(uVar33,CONCAT12((char)unaff_SS,
                                                                           &stack0xffe0)))))))),
                 (int16)CONCAT412(in_stack_0000ffd0,
                                  CONCAT210(in_stack_0000ffce,
                                            CONCAT28(in_stack_0000ffcc,
                                                     CONCAT26(in_stack_0000ffca,
                                                              CONCAT24(in_stack_0000ffc8,
                                                                       CONCAT22(in_stack_0000ffc6,
                                                                                in_stack_0000ffc4)))
                                                    ))));
      SETWINDOWPOS(5,0,(int16)CONCAT214(in_stack_0000ffbc,
                                        CONCAT212(unaff_DI,CONCAT210(unaff_SI,CONCAT19((char)((uint)
                                                  local_4 >> 8),
                                                  CONCAT18((char)local_4,
                                                           (qword)CONCAT22(in_stack_0000ffe0,
                                                                           in_stack_0000ffe2) <<
                                                           0x10))))),
                   (int16)CONCAT214(in_stack_0000ffcc,
                                    CONCAT212(in_stack_0000ffca,
                                              CONCAT210(in_stack_0000ffc8,
                                                        CONCAT28(in_stack_0000ffc6,
                                                                 CONCAT26(in_stack_0000ffc4,
                                                                          CONCAT24(in_stack_0000ffc2
                                                                                   ,CONCAT22(
                                                  in_stack_0000ffc0,in_stack_0000ffbe))))))),
                   (int16)CONCAT412(in_stack_0000ffda,
                                    CONCAT210(in_stack_0000ffd8,
                                              CONCAT28(in_stack_0000ffd6,
                                                       CONCAT26(in_stack_0000ffd4,
                                                                CONCAT42(in_stack_0000ffd0,
                                                                         in_stack_0000ffce))))),
                   (int16)CONCAT214(in_stack_0000ffec,
                                    CONCAT212(in_stack_0000ffea,
                                              CONCAT210(in_stack_0000ffe8,
                                                        CONCAT28(in_stack_0000ffe6,
                                                                 CONCAT26(in_stack_0000ffe4,
                                                                          CONCAT24(in_stack_0000ffe2
                                                                                   ,CONCAT22(
                                                  in_stack_0000ffe0,in_stack_0000ffde))))))),
                   in_stack_0000ffee);
      pHVar24 = pHVar24 + 1;
    } while (pHVar24 < (HWND16 *)0x489e);
    iVar9 = in_stack_0000ffe6 + 6;
    GETCLIENTRECT((HWND16)&stack0xffe0,(RECT16 *)CONCAT13(uVar34,CONCAT12(uVar36,unaff_SS)));
    GETWINDOWRECT((HWND16)&local_e,(RECT16 *)CONCAT13(uVar34,CONCAT12(uVar36,unaff_SS)));
    SETWINDOWPOS(6,((iVar9 - local_c) - in_stack_0000ffe6) + local_8,
                 (int16)CONCAT214(in_stack_0000ffbc,
                                  CONCAT212(unaff_DI,CONCAT210(unaff_SI,CONCAT19(uVar34,CONCAT18(
                                                  uVar36,(qword)(uint)(local_a - local_e)))))),
                 (int16)CONCAT214(in_stack_0000ffcc,
                                  CONCAT212(in_stack_0000ffca,
                                            CONCAT210(in_stack_0000ffc8,
                                                      CONCAT28(in_stack_0000ffc6,
                                                               CONCAT26(in_stack_0000ffc4,
                                                                        CONCAT24(in_stack_0000ffc2,
                                                                                 CONCAT22(
                                                  in_stack_0000ffc0,in_stack_0000ffbe))))))),
                 (int16)CONCAT412(in_stack_0000ffda,
                                  CONCAT210(in_stack_0000ffd8,
                                            CONCAT28(in_stack_0000ffd6,
                                                     CONCAT26(in_stack_0000ffd4,
                                                              CONCAT42(in_stack_0000ffd0,
                                                                       in_stack_0000ffce))))),
                 (int16)CONCAT214(in_stack_0000ffec,
                                  CONCAT212(in_stack_0000ffea,
                                            CONCAT210(in_stack_0000ffe8,
                                                      CONCAT28(in_stack_0000ffe6,
                                                               CONCAT26(in_stack_0000ffe4,
                                                                        CONCAT24(in_stack_0000ffe2,
                                                                                 CONCAT22(
                                                  in_stack_0000ffe0,in_stack_0000ffde))))))),
                 in_stack_0000ffee);
    FUN_1018_5a04(param_5,(int *)0x336,1,unaff_SI,
                  (int16)CONCAT214(in_stack_0000ffc8,
                                   CONCAT212(in_stack_0000ffc6,
                                             CONCAT210(in_stack_0000ffc4,
                                                       CONCAT28(in_stack_0000ffc2,
                                                                CONCAT26(in_stack_0000ffc0,
                                                                         CONCAT24(in_stack_0000ffbe,
                                                                                  CONCAT22(
                                                  in_stack_0000ffbc,unaff_DI))))))),
                  in_stack_0000ffca);
LAB_1008_3570:
    return (ulong)in_DX << 0x10 | 1;
  }
  if (param_4 == 0x111) {
    if (param_3 == 0x76) {
      WINHELP(0x75,(LPCSTR)0x10000,
              (uint16)CONCAT214(in_stack_0000ffc0,
                                CONCAT212(in_stack_0000ffbe,
                                          CONCAT210(in_stack_0000ffbc,
                                                    CONCAT28(unaff_DI,CONCAT26(unaff_SI,CONCAT15(
                                                  uVar34,CONCAT14(uVar36,CONCAT13(0x10,CONCAT12(0xa8
                                                  ,PTR_s_stars__hlp_10a8_00b2_10a8_00be))))))))));
      in_DX = param_3;
      goto LAB_1008_3570;
    }
    HVar23 = 0;
    puVar22 = (uint *)&PTR_DAT_10a8_0002_10a8_4894;
    do {
      if (*puVar22 == param_3) break;
      HVar23 = HVar23 + 1;
      puVar22 = puVar22 + 1;
    } while (puVar22 < (uint *)0x489c);
    in_DX = param_3;
    if ((int)HVar23 < 4) {
      if ((HVar23 == 0) || (DAT_10a8_82c2 != '\0')) {
        FUN_1018_5a04(param_5,(int *)0x336,0,unaff_SI,
                      (int16)CONCAT214(in_stack_0000ffc8,
                                       CONCAT212(in_stack_0000ffc6,
                                                 CONCAT210(in_stack_0000ffc4,
                                                           CONCAT28(in_stack_0000ffc2,
                                                                    CONCAT26(in_stack_0000ffc0,
                                                                             CONCAT24(
                                                  in_stack_0000ffbe,
                                                  CONCAT22(in_stack_0000ffbc,unaff_DI))))))),
                      in_stack_0000ffca);
        ENDDIALOG(HVar23,(int16)CONCAT214(in_stack_0000ffc4,
                                          CONCAT212(in_stack_0000ffc2,
                                                    CONCAT210(in_stack_0000ffc0,
                                                              CONCAT28(in_stack_0000ffbe,
                                                                       CONCAT26(in_stack_0000ffbc,
                                                                                CONCAT24(unaff_DI,
                                                  CONCAT22(unaff_SI,param_5))))))));
        in_DX = param_3;
        goto LAB_1008_3570;
      }
      FUN_1018_50b2(0xea,0x10);
      in_DX = param_3;
    }
    goto LAB_1008_3ddd;
  }
  if ((((param_4 != 0x201) && (param_4 != 0x204)) ||
      ((int)param_1 < (int)PTR_DAT_10a8_0000_10a8_7a6a)) ||
     (((int)(PTR_DAT_10a8_0000_10a8_7a6a + (int)PTR_DAT_10a8_0000_10a8_5794 + 1) <= (int)param_1 ||
      (param_2 < 6)))) goto LAB_1008_3ddd;
  iVar9 = (param_2 + -6) / (int)(PTR_DAT_10a8_0000_10a8_5794 + 4);
  in_DX = (param_2 + -6) % (int)(PTR_DAT_10a8_0000_10a8_5794 + 4);
  if ((0xf < iVar9) ||
     (in_DX = (param_2 + -6) % (int)(PTR_DAT_10a8_0000_10a8_5794 + 4),
     (int)(PTR_DAT_10a8_0000_10a8_5794 + 1) <= (int)in_DX)) goto LAB_1008_3ddd;
  puVar18 = (undefined *)(uint)*(byte *)((int)&DAT_10a8_82c2 + iVar9);
  CLIENTTOSCREEN((HWND16)&stack0xffea,(POINT16 *)CONCAT13(uVar34,CONCAT12(uVar36,unaff_SS)));
  HVar10 = CREATEPOPUPMENU();
  local_a = 0;
  local_6 = (uint)&DAT_10a8_446e;
  iVar11 = -(int)puVar18;
  iVar25 = 0;
  local_4 = (HMENU16 *)iVar11;
  do {
    iVar13 = iVar25;
    if (iVar11 == -1) {
      local_8 = 8;
    }
    else {
      local_8 = 0;
    }
    uVar35 = (undefined)HVar10;
    uVar37 = (undefined)(HVar10 >> 8);
    uVar34 = (undefined)local_8;
    uVar36 = 0;
    iVar25 = iVar13 + 0x3aa8;
    HVar12 = FUN_1010_0792(0,1,1,1,0,local_6);
    APPENDMENU(HVar12,(uint16)CONCAT214(in_stack_0000ffbe,
                                        CONCAT212(in_stack_0000ffbc,
                                                  CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT17(
                                                  uVar37,CONCAT16(uVar35,CONCAT15(uVar36,CONCAT14(
                                                  uVar34,CONCAT22(iVar25,0x10a8))))))))),
               (uint16)CONCAT214(in_stack_0000ffce,
                                 CONCAT212(in_stack_0000ffcc,
                                           CONCAT210(in_stack_0000ffca,
                                                     CONCAT28(in_stack_0000ffc8,
                                                              CONCAT26(in_stack_0000ffc6,
                                                                       CONCAT24(in_stack_0000ffc4,
                                                                                CONCAT22(
                                                  in_stack_0000ffc2,in_stack_0000ffc0))))))),
               in_stack_0000ffd0);
    iVar11 = iVar11 + 4;
    local_6 = local_6 + 0x76;
    iVar25 = iVar13 + 1;
  } while (local_6 < 0x4732);
  uVar38 = (undefined)HVar10;
  uVar39 = (undefined)(HVar10 >> 8);
  uVar35 = (undefined)local_8;
  uVar37 = (undefined)((uint)local_8 >> 8);
  iVar25 = iVar13 + 0x3aa9;
  uVar36 = uVar35;
  uVar34 = uVar37;
  HVar12 = FUN_1018_5112(0x166);
  APPENDMENU(HVar12,(uint16)CONCAT214(in_stack_0000ffbe,
                                      CONCAT212(in_stack_0000ffbc,
                                                CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT17(uVar39
                                                  ,CONCAT16(uVar38,CONCAT15(uVar34,CONCAT14(uVar36,
                                                  CONCAT22(iVar25,0x10a8))))))))),
             (uint16)CONCAT214(in_stack_0000ffce,
                               CONCAT212(in_stack_0000ffcc,
                                         CONCAT210(in_stack_0000ffca,
                                                   CONCAT28(in_stack_0000ffc8,
                                                            CONCAT26(in_stack_0000ffc6,
                                                                     CONCAT24(in_stack_0000ffc4,
                                                                              CONCAT22(
                                                  in_stack_0000ffc2,in_stack_0000ffc0))))))),
             in_stack_0000ffd0);
  uVar36 = (undefined)HVar10;
  uVar34 = (undefined)(HVar10 >> 8);
  iVar13 = iVar13 + 0x3aaa;
  HVar12 = FUN_1018_5112(0x167);
  APPENDMENU(HVar12,(uint16)CONCAT214(in_stack_0000ffbe,
                                      CONCAT212(in_stack_0000ffbc,
                                                CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT17(uVar34
                                                  ,CONCAT16(uVar36,CONCAT15(uVar37,CONCAT14(uVar35,
                                                  CONCAT22(iVar13,0x10a8))))))))),
             (uint16)CONCAT214(in_stack_0000ffce,
                               CONCAT212(in_stack_0000ffcc,
                                         CONCAT210(in_stack_0000ffca,
                                                   CONCAT28(in_stack_0000ffc8,
                                                            CONCAT26(in_stack_0000ffc6,
                                                                     CONCAT24(in_stack_0000ffc4,
                                                                              CONCAT22(
                                                  in_stack_0000ffc2,in_stack_0000ffc0))))))),
             in_stack_0000ffd0);
  HVar12 = CREATEPOPUPMENU();
  APPENDMENU(0x33a,(uint16)CONCAT214(in_stack_0000ffbe,
                                     CONCAT212(in_stack_0000ffbc,
                                               CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT17((char)(
                                                  HVar12 >> 8),CONCAT16((char)HVar12,0x3a9810a8)))))
                                    ),
             (uint16)CONCAT214(in_stack_0000ffce,
                               CONCAT212(in_stack_0000ffcc,
                                         CONCAT210(in_stack_0000ffca,
                                                   CONCAT28(in_stack_0000ffc8,
                                                            CONCAT26(in_stack_0000ffc6,
                                                                     CONCAT24(in_stack_0000ffc4,
                                                                              CONCAT22(
                                                  in_stack_0000ffc2,in_stack_0000ffc0))))))),
             in_stack_0000ffd0);
  APPENDMENU(0x341,(uint16)CONCAT214(in_stack_0000ffbe,
                                     CONCAT212(in_stack_0000ffbc,
                                               CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT17((char)(
                                                  HVar12 >> 8),CONCAT16((char)HVar12,0x3a9910a8)))))
                                    ),
             (uint16)CONCAT214(in_stack_0000ffce,
                               CONCAT212(in_stack_0000ffcc,
                                         CONCAT210(in_stack_0000ffca,
                                                   CONCAT28(in_stack_0000ffc8,
                                                            CONCAT26(in_stack_0000ffc6,
                                                                     CONCAT24(in_stack_0000ffc4,
                                                                              CONCAT22(
                                                  in_stack_0000ffc2,in_stack_0000ffc0))))))),
             in_stack_0000ffd0);
  iVar25 = 0;
  if (0 < (int)PTR_DAT_10a8_0000_10a8_884c) {
    local_a = 0;
    iVar11 = -(int)puVar18;
    in_DX = 0;
    local_4 = (HMENU16 *)0x0;
    do {
      uVar36 = (undefined)HVar12;
      uVar34 = (undefined)(HVar12 >> 8);
      if (iVar11 == -2) {
        uVar35 = 8;
      }
      else {
        uVar35 = 0;
      }
      uVar37 = 0;
      iVar13 = local_a + 0x3ab8;
      HVar14 = FUN_1010_0792(0,1,1,1,0,(int)(PTR_DAT_10a8_0000_10a8_59a6 + iVar25));
      APPENDMENU(HVar14,(uint16)CONCAT214(in_stack_0000ffbe,
                                          CONCAT212(in_stack_0000ffbc,
                                                    CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT17(
                                                  uVar34,CONCAT16(uVar36,CONCAT15(uVar37,CONCAT14(
                                                  uVar35,CONCAT22(iVar13,0x10a8))))))))),
                 (uint16)CONCAT214(in_stack_0000ffce,
                                   CONCAT212(in_stack_0000ffcc,
                                             CONCAT210(in_stack_0000ffca,
                                                       CONCAT28(in_stack_0000ffc8,
                                                                CONCAT26(in_stack_0000ffc6,
                                                                         CONCAT24(in_stack_0000ffc4,
                                                                                  CONCAT22(
                                                  in_stack_0000ffc2,in_stack_0000ffc0))))))),
                 in_stack_0000ffd0);
      iVar11 = iVar11 + 4;
      iVar25 = iVar25 + 0x76;
      local_a = local_a + 1;
    } while (local_a < (int)PTR_DAT_10a8_0000_10a8_884c);
  }
  HVar14 = CREATEPOPUPMENU();
  iVar25 = 0;
  local_a = 0;
  local_10 = -((uint)puVar18 & 0x1f);
  local_e = -(int)puVar18;
  do {
    HVar15 = CREATEPOPUPMENU();
    *(HMENU16 *)(&stack0xffda + iVar25) = HVar15;
    local_8 = 0x29a;
    local_4 = (HMENU16 *)local_e;
    local_c = iVar25;
    local_6 = 0;
    iVar11 = 0;
    pHVar26 = (HMENU16 *)0x29a;
    do {
      uVar6 = *(undefined2 *)(&stack0xffda + local_c);
      if (local_4 == (HMENU16 *)0xfffd) {
        uVar36 = 8;
      }
      else {
        uVar36 = 0;
      }
      APPENDMENU(*pHVar26,(uint16)CONCAT214(in_stack_0000ffbe,
                                            CONCAT212(in_stack_0000ffbc,
                                                      CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT17(
                                                  (char)((uint)uVar6 >> 8),
                                                  CONCAT16((char)uVar6,
                                                           (uint6)CONCAT14(uVar36,CONCAT22((iVar11 +
                                                                                           0x759) *
                                                  8 + local_a,0x10a8)))))))),
                 (uint16)CONCAT214(in_stack_0000ffce,
                                   CONCAT212(in_stack_0000ffcc,
                                             CONCAT210(in_stack_0000ffca,
                                                       CONCAT28(in_stack_0000ffc8,
                                                                CONCAT26(in_stack_0000ffc6,
                                                                         CONCAT24(in_stack_0000ffc4,
                                                                                  CONCAT22(
                                                  in_stack_0000ffc2,in_stack_0000ffc0))))))),
                 in_stack_0000ffd0);
      iVar25 = local_c;
      local_4 = (HMENU16 *)((int)local_4 + 0x20);
      iVar11 = iVar11 + 1;
      pHVar26 = pHVar26 + 1;
    } while (pHVar26 < (HMENU16 *)s_StarsMenu_10a8_02a4);
    if (local_10 == -3) {
      uVar36 = 8;
    }
    else {
      uVar36 = 0;
    }
    APPENDMENU(*(HMENU16 *)(local_c + 0x272),
               (uint16)CONCAT214(in_stack_0000ffbe,
                                 CONCAT212(in_stack_0000ffbc,
                                           CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT17((char)(
                                                  HVar14 >> 8),
                                                  CONCAT16((char)HVar14,
                                                           (uint6)(CONCAT14(uVar36,CONCAT22(*(
                                                  undefined2 *)(&stack0xffda + local_c),0x10a8)) |
                                                  0x1000000000))))))),
               (uint16)CONCAT214(in_stack_0000ffce,
                                 CONCAT212(in_stack_0000ffcc,
                                           CONCAT210(in_stack_0000ffca,
                                                     CONCAT28(in_stack_0000ffc8,
                                                              CONCAT26(in_stack_0000ffc6,
                                                                       CONCAT24(in_stack_0000ffc4,
                                                                                CONCAT22(
                                                  in_stack_0000ffc2,in_stack_0000ffc0))))))),
               in_stack_0000ffd0);
    local_10 = local_10 + 4;
    local_e = local_e + 4;
    local_a = local_a + 1;
    iVar25 = iVar25 + 2;
  } while (iVar25 < 6);
  puVar40 = puVar18;
  HVar15 = CREATEPOPUPMENU();
  PTR_DAT_10a8_0000_10a8_7c42 = (undefined *)0xffff;
  uVar36 = (undefined)HVar15;
  uVar34 = (undefined)(HVar15 >> 8);
  uVar16 = (uint)puVar18 & 3;
  if (uVar16 == 1) {
    uVar35 = 8;
  }
  else {
    uVar35 = 0;
  }
  APPENDMENU(0x349,(uint16)(CONCAT214(puVar18,CONCAT212(in_stack_0000ffbc,
                                                        CONCAT210(unaff_DI,CONCAT28(unaff_SI,
                                                  CONCAT17(uVar34,CONCAT16(uVar36,(uint6)(CONCAT14(
                                                  uVar35,CONCAT22(HVar10,0x10a8)) | 0x1000000000))))
                                                  ))) & (undefined  [16])0xffffffffffffffff),
             (uint16)CONCAT214(in_stack_0000ffce,
                               CONCAT212(in_stack_0000ffcc,
                                         CONCAT210(in_stack_0000ffca,
                                                   CONCAT28(in_stack_0000ffc8,
                                                            CONCAT26(in_stack_0000ffc6,
                                                                     CONCAT24(in_stack_0000ffc4,
                                                                              CONCAT22(
                                                  in_stack_0000ffc2,in_stack_0000ffc0))))))),
             in_stack_0000ffd0);
  if (uVar16 == 2) {
    uVar35 = 8;
  }
  else {
    uVar35 = 0;
  }
  APPENDMENU(0x359,(uint16)CONCAT214(uVar16,CONCAT212(in_stack_0000ffbc,
                                                      CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT17(
                                                  uVar34,CONCAT16(uVar36,(uint6)(CONCAT14(uVar35,
                                                  CONCAT22(HVar12,0x10a8)) | 0x1000000000))))))),
             (uint16)CONCAT214(in_stack_0000ffce,
                               CONCAT212(in_stack_0000ffcc,
                                         CONCAT210(in_stack_0000ffca,
                                                   CONCAT28(in_stack_0000ffc8,
                                                            CONCAT26(in_stack_0000ffc6,
                                                                     CONCAT24(in_stack_0000ffc4,
                                                                              CONCAT22(
                                                  in_stack_0000ffc2,in_stack_0000ffc0))))))),
             in_stack_0000ffd0);
  if ((uVar16 == 1) || (uVar16 == 2)) {
    APPENDMENU(0x365,(uint16)CONCAT214(uVar16,CONCAT212(in_stack_0000ffbc,
                                                        CONCAT210(unaff_DI,CONCAT28(unaff_SI,
                                                  CONCAT17(uVar34,CONCAT16(uVar36,0x3a9a10a8)))))),
               (uint16)CONCAT214(in_stack_0000ffce,
                                 CONCAT212(in_stack_0000ffcc,
                                           CONCAT210(in_stack_0000ffca,
                                                     CONCAT28(in_stack_0000ffc8,
                                                              CONCAT26(in_stack_0000ffc6,
                                                                       CONCAT24(in_stack_0000ffc4,
                                                                                CONCAT22(
                                                  in_stack_0000ffc2,in_stack_0000ffc0))))))),
               in_stack_0000ffd0);
  }
  APPENDMENU(0,(uint16)CONCAT214(uVar16,CONCAT212(in_stack_0000ffbc,
                                                  CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT17(
                                                  uVar34,CONCAT16(uVar36,0x80000000000)))))),
             (uint16)CONCAT214(in_stack_0000ffce,
                               CONCAT212(in_stack_0000ffcc,
                                         CONCAT210(in_stack_0000ffca,
                                                   CONCAT28(in_stack_0000ffc8,
                                                            CONCAT26(in_stack_0000ffc6,
                                                                     CONCAT24(in_stack_0000ffc4,
                                                                              CONCAT22(
                                                  in_stack_0000ffc2,in_stack_0000ffc0))))))),
             in_stack_0000ffd0);
  if (uVar16 == 3) {
    uVar35 = 8;
  }
  else {
    uVar35 = 0;
  }
  APPENDMENU(0x372,(uint16)CONCAT214(uVar16,CONCAT212(in_stack_0000ffbc,
                                                      CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT17(
                                                  uVar34,CONCAT16(uVar36,(uint6)(CONCAT14(uVar35,
                                                  CONCAT22(HVar14,0x10a8)) | 0x1000000000))))))),
             (uint16)CONCAT214(in_stack_0000ffce,
                               CONCAT212(in_stack_0000ffcc,
                                         CONCAT210(in_stack_0000ffca,
                                                   CONCAT28(in_stack_0000ffc8,
                                                            CONCAT26(in_stack_0000ffc6,
                                                                     CONCAT24(in_stack_0000ffc4,
                                                                              CONCAT22(
                                                  in_stack_0000ffc2,in_stack_0000ffc0))))))),
             in_stack_0000ffd0);
  APPENDMENU(0,(uint16)CONCAT214(uVar16,CONCAT212(in_stack_0000ffbc,
                                                  CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT17(
                                                  uVar34,CONCAT16(uVar36,0x80000000000)))))),
             (uint16)CONCAT214(in_stack_0000ffce,
                               CONCAT212(in_stack_0000ffcc,
                                         CONCAT210(in_stack_0000ffca,
                                                   CONCAT28(in_stack_0000ffc8,
                                                            CONCAT26(in_stack_0000ffc6,
                                                                     CONCAT24(in_stack_0000ffc4,
                                                                              CONCAT22(
                                                  in_stack_0000ffc2,in_stack_0000ffc0))))))),
             in_stack_0000ffd0);
  APPENDMENU(0x382,(uint16)CONCAT214(uVar16,CONCAT212(in_stack_0000ffbc,
                                                      CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT17(
                                                  uVar34,CONCAT16(uVar36,(uint6)CONCAT14(-(uVar16 ==
                                                                                          0) & 8,
                                                  0x3a9b10a8))))))),
             (uint16)CONCAT214(in_stack_0000ffce,
                               CONCAT212(in_stack_0000ffcc,
                                         CONCAT210(in_stack_0000ffca,
                                                   CONCAT28(in_stack_0000ffc8,
                                                            CONCAT26(in_stack_0000ffc6,
                                                                     CONCAT24(in_stack_0000ffc4,
                                                                              CONCAT22(
                                                  in_stack_0000ffc2,in_stack_0000ffc0))))))),
             in_stack_0000ffd0);
  if (param_4 == 0x201) {
    uVar35 = 0;
  }
  else {
    uVar35 = 2;
  }
  TRACKPOPUPMENU(0,(uint16)CONCAT214(unaff_SI,CONCAT113(uVar34,CONCAT112(uVar36,ZEXT1112(CONCAT110(
                                                  uVar35,CONCAT28(param_1,CONCAT26(param_2,ZEXT26(
                                                  param_5) << 0x10))) | (undefined  [11])0x40000))))
                 ,(int16)CONCAT214(in_stack_0000ffc8,
                                   CONCAT212(in_stack_0000ffc6,
                                             CONCAT210(in_stack_0000ffc4,
                                                       CONCAT28(in_stack_0000ffc2,
                                                                CONCAT26(in_stack_0000ffc0,
                                                                         CONCAT24(uVar16,CONCAT22(
                                                  in_stack_0000ffbc,unaff_DI))))))),
                 (int16)CONCAT214(HVar14,CONCAT212(HVar12,CONCAT210(HVar10,CONCAT46(
                                                  in_stack_0000ffd0,
                                                  CONCAT24(in_stack_0000ffce,
                                                           CONCAT22(in_stack_0000ffcc,
                                                                    in_stack_0000ffca)))))),
                 (int16)CONCAT214(iVar9,CONCAT212(in_stack_0000ffe6,
                                                  CONCAT210(in_stack_0000ffe4,
                                                            CONCAT28(in_stack_0000ffe2,
                                                                     CONCAT26(in_stack_0000ffe0,
                                                                              CONCAT24(
                                                  in_stack_0000ffde,in_stack_0000ffda)))))),param_1,
                 (RECT16 *)param_2);
  DESTROYMENU(HVar15);
  pHVar26 = (HMENU16 *)&stack0xffd4;
  local_4 = pHVar26;
  do {
    DESTROYMENU(*pHVar26);
    pHVar26 = pHVar26 + 1;
  } while (pHVar26 < &stack0xffe0);
  bVar17 = PEEKMESSAGE((MSG16 *)&DAT_10a8_0002,0x111,
                       (uint16)CONCAT214(uVar16,CONCAT212(in_stack_0000ffbc,
                                                          CONCAT210(unaff_DI,CONCAT28(unaff_SI,
                                                  CONCAT17(uVar33,CONCAT16((char)unaff_SS,
                                                                           CONCAT15((char)((uint)&
                                                  stack0xffc2 >> 8),
                                                  CONCAT14((char)&stack0xffc2,
                                                           CONCAT22(param_5,0x111))))))))),
                       (uint16)CONCAT214(in_stack_0000ffce,
                                         CONCAT212(in_stack_0000ffcc,
                                                   CONCAT210(in_stack_0000ffca,
                                                             CONCAT28(in_stack_0000ffc8,
                                                                      CONCAT26(in_stack_0000ffc6,
                                                                               CONCAT24(
                                                  in_stack_0000ffc4,
                                                  CONCAT22(in_stack_0000ffc2,in_stack_0000ffc0))))))
                                        ),
                       (uint16)CONCAT214(in_stack_0000ffde,
                                         CONCAT410(in_stack_0000ffda,
                                                   CONCAT28(HVar14,CONCAT26(HVar12,CONCAT24(HVar10,
                                                  in_stack_0000ffd0))))));
  if (((bVar17 != 0) && (14999 < in_stack_0000ffc6)) && (in_stack_0000ffc6 < 0x3afc)) {
    PTR_DAT_10a8_0000_10a8_7c42 = (undefined *)(in_stack_0000ffc6 + 0xc568);
  }
  local_4 = (HMENU16 *)0xffff;
  puVar18 = (undefined *)local_4;
  puVar41 = puVar40;
  if (PTR_DAT_10a8_0000_10a8_7c42 == (undefined *)0xffff) goto LAB_1008_3d84;
  if (PTR_DAT_10a8_0000_10a8_7c42 == (undefined *)0x0) {
    puVar28 = (undefined4 *)&PTR_DAT_10a8_0000_10a8_8166;
    puVar27 = (undefined4 *)&DAT_10a8_446e;
    for (iVar25 = 0x1d; iVar25 != 0; iVar25 = iVar25 + -1) {
      puVar5 = puVar28;
      puVar28 = puVar28 + 1;
      puVar2 = puVar27;
      puVar27 = puVar27 + 1;
      *puVar5 = *puVar2;
    }
    *(undefined2 *)puVar28 = *(undefined2 *)puVar27;
    iVar25 = FUN_1078_0000(param_5,(undefined *)0x0,0);
    if (iVar25 == 0) goto LAB_1008_3b2f;
LAB_1008_3b48:
    if ((int)PTR_DAT_10a8_0000_10a8_884c < 0x10) {
      local_4 = (HMENU16 *)PTR_DAT_10a8_0000_10a8_884c;
      PTR_DAT_10a8_0000_10a8_884c = PTR_DAT_10a8_0000_10a8_884c + 1;
    }
    else {
      local_4 = (HMENU16 *)0xf;
      do {
        iVar25 = 0;
        do {
          if (((*(byte *)((int)&DAT_10a8_82c2 + iVar25) & 3) == 2) &&
             ((HMENU16 *)
              (uint)(byte)(((ulong)*(byte *)((int)&DAT_10a8_82c2 + iVar25) & 0xffffff3c) >> 2) ==
              local_4)) goto LAB_1008_3dd5;
          iVar25 = iVar25 + 1;
        } while (iVar25 < 0x10);
        if (iVar25 == 0x10) goto LAB_1008_3dd5;
        local_4 = (HMENU16 *)((int)local_4 + -1);
      } while (-1 < (int)local_4);
    }
    puVar27 = (undefined4 *)(PTR_DAT_10a8_0000_10a8_59a6 + (int)local_4 * 0x76);
    puVar28 = (undefined4 *)&PTR_DAT_10a8_0000_10a8_8166;
    for (iVar25 = 0x1d; iVar25 != 0; iVar25 = iVar25 + -1) {
      puVar5 = puVar27;
      puVar27 = puVar27 + 1;
      puVar2 = puVar28;
      puVar28 = puVar28 + 1;
      *puVar5 = *puVar2;
    }
    *(undefined2 *)puVar27 = *(undefined2 *)puVar28;
    pcVar30 = (char *)&PTR_DAT_10a8_0000_10a8_48ca;
    puVar29 = (undefined2 *)(PTR_DAT_10a8_0000_10a8_574c + (int)local_4 * 0xd);
    uVar16 = 0xffff;
    do {
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar3 = pcVar30;
      pcVar30 = pcVar30 + 1;
    } while (*pcVar3 != '\0');
    uVar16 = ~uVar16;
    puVar31 = (undefined2 *)(pcVar30 + -uVar16);
    for (uVar21 = uVar16 >> 1; uVar21 != 0; uVar21 = uVar21 - 1) {
      puVar4 = puVar29;
      puVar29 = puVar29 + 1;
      puVar1 = puVar31;
      puVar31 = puVar31 + 1;
      *puVar4 = *puVar1;
    }
    for (uVar16 = (uint)((uVar16 & 1) != 0); uVar16 != 0; uVar16 = uVar16 - 1) {
      puVar4 = puVar29;
      puVar29 = (undefined2 *)((int)puVar29 + 1);
      puVar1 = puVar31;
      puVar31 = (undefined2 *)((int)puVar31 + 1);
      *(undefined *)puVar4 = *(undefined *)puVar1;
    }
    puVar18 = (undefined *)((int)local_4 << 2 | 2);
    puVar41 = puVar40;
    local_4 = (HMENU16 *)puVar18;
LAB_1008_3d84:
    if ((puVar18 != (undefined *)0xffff) && (puVar41 != puVar18)) {
      *(undefined *)((int)&DAT_10a8_82c2 + iVar9) = (char)puVar18;
      if (puVar18 == (undefined *)0x0) {
        while (iVar9 + 1 < 0x10) {
          *(undefined *)((int)&DAT_10a8_82c3 + iVar9) = 0;
          iVar9 = iVar9 + 1;
        }
      }
      else if (0 < iVar9) {
        while ((local_4 = (HMENU16 *)puVar18, -1 < iVar9 + -1 &&
               (*(char *)((int)&PTR_DAT_10a8_0000_10a8_82c0 + 1 + iVar9) == '\0'))) {
          *(undefined *)((int)&PTR_DAT_10a8_0000_10a8_82c0 + 1 + iVar9) = (char)puVar18;
          iVar9 = iVar9 + -1;
        }
      }
      INVALIDATERECT(1,(RECT16 *)0x0,0);
    }
  }
  else {
LAB_1008_3b2f:
    if (PTR_DAT_10a8_0000_10a8_7c42 == (undefined *)&DAT_10a8_0001) {
      iVar25 = FUN_1008_532c(param_5,1);
      puVar18 = (undefined *)local_4;
      puVar41 = puVar40;
      if (0 < iVar25) goto LAB_1008_3b48;
      goto LAB_1008_3d84;
    }
    if (PTR_DAT_10a8_0000_10a8_7c42 != (undefined *)&DAT_10a8_0002) {
      puVar41 = puVar40;
      if (PTR_DAT_10a8_0000_10a8_7c42 == (undefined *)&DAT_10a8_0003) {
        puVar18 = (undefined *)0x0;
      }
      else if (((int)PTR_DAT_10a8_0000_10a8_7c42 < 0x10) ||
              (0x1f < (int)PTR_DAT_10a8_0000_10a8_7c42)) {
        if (((int)PTR_DAT_10a8_0000_10a8_7c42 < 0x20) || (0x2f < (int)PTR_DAT_10a8_0000_10a8_7c42))
        {
          puVar18 = (undefined *)local_4;
          if (0x2f < (int)PTR_DAT_10a8_0000_10a8_7c42) {
            puVar18 = (undefined *)((int)(PTR_DAT_10a8_0000_10a8_7c42 + -0x30) * 4 | 3);
          }
        }
        else {
          puVar18 = (undefined *)((int)(PTR_DAT_10a8_0000_10a8_7c42 + -0x20) * 4 | 2);
        }
      }
      else {
        puVar18 = (undefined *)((int)(PTR_DAT_10a8_0000_10a8_7c42 + -0x10) * 4 | 1);
      }
      goto LAB_1008_3d84;
    }
    uVar21 = (int)puVar40 >> 2;
    if (uVar16 == 1) {
      puVar28 = (undefined4 *)&PTR_DAT_10a8_0000_10a8_8166;
      puVar27 = (undefined4 *)((int)&DAT_10a8_446e + uVar21 * 0x76);
      for (iVar25 = 0x1d; iVar25 != 0; iVar25 = iVar25 + -1) {
        puVar5 = puVar28;
        puVar28 = puVar28 + 1;
        puVar2 = puVar27;
        puVar27 = puVar27 + 1;
        *puVar5 = *puVar2;
      }
      *(undefined2 *)puVar28 = *(undefined2 *)puVar27;
    }
    else {
      puVar28 = (undefined4 *)&PTR_DAT_10a8_0000_10a8_8166;
      puVar27 = (undefined4 *)(PTR_DAT_10a8_0000_10a8_59a6 + uVar21 * 0x76);
      for (iVar25 = 0x1d; iVar25 != 0; iVar25 = iVar25 + -1) {
        puVar5 = puVar28;
        puVar28 = puVar28 + 1;
        puVar2 = puVar27;
        puVar27 = puVar27 + 1;
        *puVar5 = *puVar2;
      }
      *(undefined2 *)puVar28 = *(undefined2 *)puVar27;
      pcVar30 = PTR_DAT_10a8_0000_10a8_574c + uVar21 * 0xd;
      uVar20 = 0xffff;
      do {
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar3 = pcVar30;
        pcVar30 = pcVar30 + 1;
      } while (*pcVar3 != '\0');
      uVar20 = ~uVar20;
      puVar29 = (undefined2 *)(pcVar30 + -uVar20);
      puVar31 = (undefined2 *)&PTR_DAT_10a8_0000_10a8_48ca;
      for (uVar19 = uVar20 >> 1; uVar19 != 0; uVar19 = uVar19 - 1) {
        puVar4 = puVar31;
        puVar31 = puVar31 + 1;
        puVar1 = puVar29;
        puVar29 = puVar29 + 1;
        *puVar4 = *puVar1;
      }
      for (uVar20 = (uint)((uVar20 & 1) != 0); in_DX = uVar21, uVar20 != 0; uVar20 = uVar20 - 1) {
        puVar4 = puVar31;
        puVar31 = (undefined2 *)((int)puVar31 + 1);
        puVar1 = puVar29;
        puVar29 = (undefined2 *)((int)puVar29 + 1);
        *(undefined *)puVar4 = *(undefined *)puVar1;
      }
    }
    iVar25 = uVar21 * 0x76;
    _PTR_DAT_10a8_0000_10a8_024c = _PTR_DAT_10a8_0000_10a8_8172;
    _PTR_DAT_10a8_0000_10a8_0250 = 0;
    piVar7 = FUN_1010_26a0();
    if (piVar7 != (int16 *)0x0) {
      if (_PTR_DAT_10a8_0000_10a8_8172 == 0) {
        PTR_DAT_10a8_0000_10a8_48ba._0_1_ = 0;
      }
      else {
        pcVar30 = (char *)&PTR_DAT_10a8_0000_10a8_573c;
        uVar21 = 0xffff;
        do {
          if (uVar21 == 0) break;
          uVar21 = uVar21 - 1;
          pcVar3 = pcVar30;
          pcVar30 = pcVar30 + 1;
        } while (*pcVar3 != '\0');
        uVar21 = ~uVar21;
        puVar29 = (undefined2 *)(pcVar30 + -uVar21);
        puVar31 = (undefined2 *)&PTR_DAT_10a8_0000_10a8_48ba;
        for (uVar20 = uVar21 >> 1; uVar20 != 0; uVar20 = uVar20 - 1) {
          puVar4 = puVar31;
          puVar31 = puVar31 + 1;
          puVar1 = puVar29;
          puVar29 = puVar29 + 1;
          *puVar4 = *puVar1;
        }
        for (uVar21 = (uint)((uVar21 & 1) != 0); uVar21 != 0; uVar21 = uVar21 - 1) {
          puVar4 = puVar31;
          puVar31 = (undefined2 *)((int)puVar31 + 1);
          puVar1 = puVar29;
          puVar29 = (undefined2 *)((int)puVar29 + 1);
          *(undefined *)puVar4 = *(undefined *)puVar1;
        }
      }
      iVar11 = FUN_1078_0000(param_5,(undefined *)0x0,0);
      puVar18 = (undefined *)local_4;
      puVar41 = puVar40;
      if (iVar11 != 0) {
        if (uVar16 == 1) goto LAB_1008_3b48;
        puVar27 = (undefined4 *)(PTR_DAT_10a8_0000_10a8_59a6 + iVar25);
        puVar28 = (undefined4 *)&PTR_DAT_10a8_0000_10a8_8166;
        for (iVar25 = 0x1d; iVar25 != 0; iVar25 = iVar25 + -1) {
          puVar5 = puVar27;
          puVar27 = puVar27 + 1;
          puVar2 = puVar28;
          puVar28 = puVar28 + 1;
          *puVar5 = *puVar2;
        }
        *(undefined2 *)puVar27 = *(undefined2 *)puVar28;
        pcVar30 = (char *)&PTR_DAT_10a8_0000_10a8_48ca;
        puVar29 = (undefined2 *)(PTR_DAT_10a8_0000_10a8_574c + ((int)puVar40 >> 2) * 0xd);
        uVar16 = 0xffff;
        do {
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar3 = pcVar30;
          pcVar30 = pcVar30 + 1;
        } while (*pcVar3 != '\0');
        uVar16 = ~uVar16;
        puVar31 = (undefined2 *)(pcVar30 + -uVar16);
        for (uVar21 = uVar16 >> 1; uVar21 != 0; uVar21 = uVar21 - 1) {
          puVar4 = puVar29;
          puVar29 = puVar29 + 1;
          puVar1 = puVar31;
          puVar31 = puVar31 + 1;
          *puVar4 = *puVar1;
        }
        for (uVar16 = (uint)((uVar16 & 1) != 0); uVar16 != 0; uVar16 = uVar16 - 1) {
          puVar4 = puVar29;
          puVar29 = (undefined2 *)((int)puVar29 + 1);
          puVar1 = puVar31;
          puVar31 = (undefined2 *)((int)puVar31 + 1);
          *(undefined *)puVar4 = *(undefined *)puVar1;
        }
        puVar41 = (undefined *)0xffff;
        puVar18 = puVar40;
        local_4 = (HMENU16 *)puVar40;
      }
      goto LAB_1008_3d84;
    }
  }
LAB_1008_3dd5:
  SETFOCUS((HWND16)param_5);
LAB_1008_3ddd:
  return (ulong)in_DX << 0x10;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Restarted to delay deadcode elimination for space: stack

void __cdecl16far FUN_1008_3de6(HWND16 param_1,int16 *param_2,undefined6 param_3)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 *puVar3;
  byte bVar4;
  byte bVar5;
  int16 *__return_storage_ptr__;
  int16 *__return_storage_ptr___00;
  int16 *piVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  undefined2 unaff_BP;
  VA_LIST16 unaff_SI;
  undefined4 *puVar10;
  HRGN16 unaff_DI;
  undefined4 *puVar11;
  char *pcVar12;
  undefined2 unaff_SS;
  dword dVar13;
  undefined4 in_stack_00000000;
  undefined8 in_stack_0000000e;
  undefined2 uVar14;
  char *in_stack_0000ffe2;
  undefined2 in_stack_0000ffe4;
  undefined2 in_stack_0000ffe6;
  undefined2 in_stack_0000ffe8;
  undefined2 in_stack_0000ffea;
  int in_stack_0000ffec;
  undefined2 in_stack_0000ffee;
  int in_stack_0000fff0;
  undefined2 in_stack_0000fff2;
  int iVar15;
  undefined *puVar16;
  undefined2 in_stack_0000fffa;
  int iVar17;
  undefined in_stack_0000fffc;
  undefined uVar18;
  undefined in_stack_0000fffd;
  undefined uVar19;

  iVar15 = 0;
  __return_storage_ptr__ = param_2;
  if (param_2 == (int16 *)0x0) {
    iVar15 = 1;
    __return_storage_ptr__ = (int16 *)GETDC(param_1);
  }
  GETCLIENTRECT((HWND16)&stack0xffe4,(RECT16 *)CONCAT22(param_1,unaff_SS));
  __return_storage_ptr___00 =
       SETBKMODE((int16 *)&DAT_10a8_0001,(HDC16)__return_storage_ptr__,
                 (int16)CONCAT214(in_stack_0000ffec,
                                  CONCAT212(in_stack_0000ffea,
                                            CONCAT210(in_stack_0000ffe8,
                                                      CONCAT28(in_stack_0000ffe6,
                                                               CONCAT26(in_stack_0000ffe4,
                                                                        CONCAT24(in_stack_0000ffe2,
                                                                                 CONCAT22(unaff_DI,
                                                  unaff_SI))))))));
  SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_59c6,(HRGN16)__return_storage_ptr__,(HRGN16)unaff_SI,
               unaff_DI,(int16)CONCAT214(in_stack_0000fff0,
                                         CONCAT212(in_stack_0000ffee,
                                                   CONCAT210(in_stack_0000ffec,
                                                             CONCAT28(in_stack_0000ffea,
                                                                      CONCAT26(in_stack_0000ffe8,
                                                                               CONCAT24(
                                                  in_stack_0000ffe6,
                                                  CONCAT22(in_stack_0000ffe4,in_stack_0000ffe2))))))
                                        ));
  dVar13 = GETTEXTEXTENT(0xb,s_Player__16__10a8_038c,
                         (int16)CONCAT214(in_stack_0000ffea,
                                          CONCAT212(in_stack_0000ffe8,
                                                    CONCAT210(in_stack_0000ffe6,
                                                              CONCAT28(in_stack_0000ffe4,
                                                                       CONCAT26(in_stack_0000ffe2,
                                                                                CONCAT24(unaff_DI,
                                                  CONCAT22(unaff_SI,__return_storage_ptr__))))))));
  PTR_DAT_10a8_0000_10a8_7a6a = (undefined *)((int)dVar13 + 0xc);
  puVar16 = (undefined *)0x6;
  SETRECT((RECT16 *)
          CONCAT22(PTR_DAT_10a8_0000_10a8_7a6a + (int)PTR_DAT_10a8_0000_10a8_5794 + 1,
                   PTR_DAT_10a8_0000_10a8_5794 + 7),
          (int16)CONCAT214(in_stack_0000ffe4,
                           CONCAT212(in_stack_0000ffe2,
                                     CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT26(unaff_SS,CONCAT24
                                                  (&stack0xffec,
                                                   CONCAT22(PTR_DAT_10a8_0000_10a8_7a6a,6))))))),
          (int16)CONCAT214(__return_storage_ptr___00,
                           CONCAT212(in_stack_0000fff2,
                                     CONCAT210(in_stack_0000fff0,
                                               CONCAT28(in_stack_0000ffee,
                                                        CONCAT26(in_stack_0000ffec,
                                                                 CONCAT24(in_stack_0000ffea,
                                                                          CONCAT22(in_stack_0000ffe8
                                                                                   ,
                                                  in_stack_0000ffe6))))))),
          (int16)CONCAT610(CONCAT24(param_1,in_stack_00000000),
                           CONCAT28(unaff_BP,CONCAT17(in_stack_0000fffd,
                                                      CONCAT16(in_stack_0000fffc,
                                                               CONCAT24(in_stack_0000fffa,
                                                                        CONCAT22(6,iVar15)))))),
          (int16)CONCAT88(in_stack_0000000e,CONCAT62(param_3,param_2)));
  iVar17 = 0;
  do {
    piVar6 = _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x39810a8,(LPCSTR)CONCAT22(iVar17 + 1,0x10a8),
                       unaff_SI);
    FUN_1018_55f6(__return_storage_ptr__,(int)(PTR_DAT_10a8_0000_10a8_7a6a + -6),(int)puVar16,
                  (int)&DAT_10a8_86de,piVar6,0,CONCAT22(unaff_DI,unaff_SI),in_stack_0000ffe2,
                  CONCAT212(in_stack_0000fff0,
                            CONCAT210(in_stack_0000ffee,
                                      CONCAT28(in_stack_0000ffec,
                                               CONCAT26(in_stack_0000ffea,
                                                        CONCAT24(in_stack_0000ffe8,
                                                                 CONCAT22(in_stack_0000ffe6,
                                                                          in_stack_0000ffe4)))))));
    FUN_1008_9946((HRGN16)__return_storage_ptr__,(int *)&stack0xffec,
                  (int16 *)PTR_DAT_10a8_0000_10a8_58a6,
                  (undefined1  [10])
                  CONCAT28(in_stack_0000ffe6,
                           CONCAT26(in_stack_0000ffe4,
                                    CONCAT24(in_stack_0000ffe2,CONCAT22(unaff_DI,unaff_SI)))),
                  in_stack_0000ffe8,in_stack_0000ffea,in_stack_0000ffec,in_stack_0000ffee,
                  in_stack_0000fff0);
    bVar4 = *(byte *)((int)&DAT_10a8_82c2 + iVar17);
    uVar9 = (bVar4 & 0xff3c) >> 2;
    uVar18 = (undefined)uVar9;
    uVar19 = 0;
    bVar5 = bVar4 & 3;
    if ((bVar4 & 3) == 0) {
      puVar11 = (undefined4 *)&DAT_10a8_86de;
      puVar10 = (undefined4 *)s_____No_Player_____10a8_03a4;
      for (iVar8 = 4; iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar3 = puVar11;
        puVar11 = puVar11 + 1;
        puVar1 = puVar10;
        puVar10 = puVar10 + 1;
        *puVar3 = *puVar1;
      }
      *(undefined2 *)puVar11 = *(undefined2 *)puVar10;
    }
    else if (bVar5 == 1) {
      if (uVar9 < 6) {
        puVar7 = (undefined *)((int)s_Humanoid_10a8_44c4 + uVar9 * 0x76);
        uVar14 = 0x3b6;
LAB_1008_3f1d:
        _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)CONCAT22(uVar14,0x10a8),
                  (LPCSTR)CONCAT22(puVar7,0x10a8),(VA_LIST16)((int)s_From___s_c_c_10a8_10a2 + 6));
      }
      else {
        if (uVar9 == 6) {
          uVar9 = 0x166;
        }
        else {
          uVar9 = 0x167;
        }
        FUN_1018_50de(uVar9,(char *)&DAT_10a8_86de);
      }
    }
    else {
      if (bVar5 == 2) {
        in_stack_0000ffe2 = PTR_DAT_10a8_0000_10a8_574c + uVar9 * 0xd;
        if (*in_stack_0000ffe2 == '\0') {
          puVar7 = PTR_DAT_10a8_0000_10a8_59a6 + uVar9 * 0x76 + 0x56;
          uVar14 = 0x3cb;
          goto LAB_1008_3f1d;
        }
        puVar7 = PTR_DAT_10a8_0000_10a8_59a6 + uVar9 * 0x76 + 0x56;
        uVar14 = 0x3be;
      }
      else {
        if (bVar5 != 3) goto LAB_1008_3f99;
        puVar7 = (undefined *)*(undefined2 *)((uVar9 & 7) * 2 + 0x272);
        uVar14 = 0x3d3;
      }
      _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)CONCAT22(uVar14,0x10a8),
                (LPCSTR)CONCAT22(puVar7,0x10a8),(VA_LIST16)((int)s_From___s_c_c_10a8_10a2 + 6));
    }
LAB_1008_3f99:
    pcVar12 = (char *)&DAT_10a8_86de;
    uVar9 = 0xffff;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar2 = pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (*pcVar2 != '\0');
    TEXTOUT(~uVar9 - 1,
            (int16)CONCAT214(in_stack_0000ffe2,
                             CONCAT212(unaff_DI,CONCAT210(unaff_SI,CONCAT28(__return_storage_ptr__,
                                                                            CONCAT26(
                                                  in_stack_0000fff0 + 6,CONCAT24(puVar16,0x10a886de)
                                                  ))))),
            (int16)CONCAT214(in_stack_0000fff2,
                             CONCAT212(in_stack_0000fff0,
                                       CONCAT210(in_stack_0000ffee,
                                                 CONCAT28(in_stack_0000ffec,
                                                          CONCAT26(in_stack_0000ffea,
                                                                   CONCAT24(in_stack_0000ffe8,
                                                                            CONCAT22(
                                                  in_stack_0000ffe6,in_stack_0000ffe4))))))),
            (LPCSTR)CONCAT22(iVar15,__return_storage_ptr___00),
            (int16)CONCAT214(__return_storage_ptr__,
                             CONCAT68(CONCAT24(param_1,in_stack_00000000),
                                      CONCAT26(unaff_BP,CONCAT15(uVar19,CONCAT14(uVar18,CONCAT22(
                                                  iVar17,puVar16)))))));
    OFFSETRECT((RECT16 *)ZEXT24(PTR_DAT_10a8_0000_10a8_5794 + 4),
               (int16)CONCAT214(in_stack_0000ffe8,
                                CONCAT212(in_stack_0000ffe6,
                                          CONCAT210(in_stack_0000ffe4,
                                                    CONCAT28(in_stack_0000ffe2,
                                                             CONCAT26(unaff_DI,CONCAT24(unaff_SI,
                                                  CONCAT22(unaff_SS,&stack0xffec))))))),
               (int16)CONCAT214(puVar16,CONCAT212(iVar15,CONCAT210(__return_storage_ptr___00,
                                                                   CONCAT28(in_stack_0000fff2,
                                                                            CONCAT26(
                                                  in_stack_0000fff0,
                                                  CONCAT24(in_stack_0000ffee,
                                                           CONCAT22(in_stack_0000ffec,
                                                                    in_stack_0000ffea))))))));
    puVar16 = puVar16 + (int)(PTR_DAT_10a8_0000_10a8_5794 + 4);
    iVar17 = iVar17 + 1;
    if (0xf < iVar17) {
      SETBKMODE(__return_storage_ptr___00,(HDC16)__return_storage_ptr__,
                (int16)CONCAT214(in_stack_0000ffec,
                                 CONCAT212(in_stack_0000ffea,
                                           CONCAT210(in_stack_0000ffe8,
                                                     CONCAT28(in_stack_0000ffe6,
                                                              CONCAT26(in_stack_0000ffe4,
                                                                       CONCAT24(in_stack_0000ffe2,
                                                                                CONCAT22(unaff_DI,
                                                  unaff_SI))))))));
      if (iVar15 != 0) {
        RELEASEDC(__return_storage_ptr__,param_1,(HDC16)unaff_SI);
      }
      return;
    }
  } while( true );
}

