let SessionLoad = 1
if &cp | set nocp | endif
let s:so_save = &g:so | let s:siso_save = &g:siso | setg so=0 siso=0 | setl so=-1 siso=-1
let v:this_session=expand("<sfile>:p")
silent only
silent tabonly
cd ~/C_Learning/NumberTwo
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
set shortmess=aoO
argglobal
%argdel
set stal=2
tabnew
tabnew
tabnew
tabnew
tabrewind
edit ~/C_Learning/NumberTwo
let s:save_splitbelow = &splitbelow
let s:save_splitright = &splitright
set splitbelow splitright
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd w
wincmd _ | wincmd |
split
1wincmd k
wincmd w
let &splitbelow = s:save_splitbelow
let &splitright = s:save_splitright
wincmd t
let s:save_winminheight = &winminheight
let s:save_winminwidth = &winminwidth
set winminheight=0
set winheight=1
set winminwidth=0
set winwidth=1
exe 'vert 1resize ' . ((&columns * 20 + 57) / 115)
exe '2resize ' . ((&lines * 20 + 14) / 29)
exe 'vert 2resize ' . ((&columns * 94 + 57) / 115)
exe '3resize ' . ((&lines * 5 + 14) / 29)
exe 'vert 3resize ' . ((&columns * 94 + 57) / 115)
argglobal
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 8 - ((7 * winheight(0) + 13) / 26)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 8
normal! 0
lcd ~/C_Learning/NumberTwo
wincmd w
argglobal
if bufexists("~/C_Learning/NumberTwo/01-1testingWithTypes.c") | buffer ~/C_Learning/NumberTwo/01-1testingWithTypes.c | else | edit ~/C_Learning/NumberTwo/01-1testingWithTypes.c | endif
balt ~/C_Learning/NumberTwo/\!/data/data/com.termux/files/usr/bin/bash
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 2 - ((1 * winheight(0) + 10) / 20)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 2
normal! 0
wincmd w
argglobal
terminal ++curwin ++cols=94 ++rows=5 
let s:term_buf_9 = bufnr()
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 2) / 5)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
exe 'vert 1resize ' . ((&columns * 20 + 57) / 115)
exe '2resize ' . ((&lines * 20 + 14) / 29)
exe 'vert 2resize ' . ((&columns * 94 + 57) / 115)
exe '3resize ' . ((&lines * 5 + 14) / 29)
exe 'vert 3resize ' . ((&columns * 94 + 57) / 115)
tabnext
edit ~/C_Learning/NumberTwo/01-2testingWithStrings.c
argglobal
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 8 - ((7 * winheight(0) + 13) / 26)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 8
normal! 0
lcd ~/C_Learning/NumberTwo
tabnext
edit ~/C_Learning/NumberTwo/01-3ConversionOnTypes.c
argglobal
balt ~/C_Learning/NumberTwo/01-2testingWithStrings.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 6 - ((5 * winheight(0) + 13) / 26)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 6
normal! 0
lcd ~/C_Learning/NumberTwo
tabnext
edit ~/C_Learning/NumberTwo/01-4AsciiTable.c
argglobal
balt ~/C_Learning/NumberTwo/01-3ConversionOnTypes.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 6 - ((5 * winheight(0) + 13) / 26)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 6
normal! 0
lcd ~/C_Learning/NumberTwo
tabnext
edit ~/C_Learning/NumberTwo/01-5NewCommands.c
argglobal
balt ~/C_Learning/NumberTwo/01-4AsciiTable.c
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=10
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 7 - ((6 * winheight(0) + 13) / 26)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 7
normal! 0
lcd ~/C_Learning/NumberTwo
tabnext 1
set stal=1
badd +1 ~/C_Learning/NumberTwo/01-1testingWithTypes.c
badd +1 ~/C_Learning/NumberTwo/01-2testingWithStrings.c
badd +1 ~/C_Learning/NumberTwo/01-3ConversionOnTypes.c
badd +1 ~/C_Learning/NumberTwo/01-4AsciiTable.c
badd +1 ~/C_Learning/NumberTwo/01-5NewCommands.c
badd +1 ~/C_Learning/NumberTwo/\!/data/data/com.termux/files/usr/bin/bash
if exists('s:wipebuf') && len(win_findbuf(s:wipebuf)) == 0
  silent exe 'bwipe ' . s:wipebuf
endif
unlet! s:wipebuf
set winheight=1 winwidth=20 shortmess=filnxtToOS
let s:sx = expand("<sfile>:p:r")."x.vim"
if filereadable(s:sx)
  exe "source " . fnameescape(s:sx)
endif
let &g:so = s:so_save | let &g:siso = s:siso_save
nohlsearch
doautoall SessionLoadPost
unlet SessionLoad
" vim: set ft=vim :
