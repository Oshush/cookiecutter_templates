project('{{cookiecutter.project_name}}', 'c')
add_project_link_arguments('--std=c2x','-lm',language:'c')

sources = ['main.c']
shared_library('simclist','libraries/simclist/simclist.c',install:true)
dep = dependency('raylib','simclist')
executable('{{cookiecutter.project_name}}', 
            sources, 
            dependencies: dep,
            install_rpath: meson.build_root() / 'libraries/simclist')
