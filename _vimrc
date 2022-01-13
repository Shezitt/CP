syntax on
colorscheme blue

cd E:\CP\working directory\Contest 

" Visual

set number
set tabstop=4
set shiftwidth=4
set showcmd
set cursorline
set smartindent

set backspace=start

" Mappings

let mapleader = ","
inoremap <c-d> <esc>ddi
inoremap jk <esc> 
inoremap { {}<Left>
inoremap {<CR> {<CR>}<Esc>O
inoremap {{ {
inoremap {} {}

" Autocmd

autocmd filetype cpp nnoremap <F9> :w <bar> !g++ -Wall -std=c++14 % -o %:r<CR>
autocmd filetype cpp nnoremap <F10> :!%:r<CR>
