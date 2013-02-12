project(openGL)
cmake_minimum_required(VERSION 2.8)
set(LIBS GL glut GLU X11 m)

add_executable(aaindex aaindex.c)
target_link_libraries(aaindex ${LIBS})

add_executable(blendeqn blendeqn.c)
target_link_libraries(blendeqn ${LIBS})

#add_executable(convolution convolution.c)
#target_link_libraries(convolution ${LIBS})

add_executable(fogcoord fogcoord.c)
target_link_libraries(fogcoord ${LIBS})

add_executable(light light.c)
target_link_libraries(light ${LIBS})

add_executable(movelight movelight.c)
target_link_libraries(movelight ${LIBS})

add_executable(polys polys.c)
target_link_libraries(polys ${LIBS})

add_executable(stencil stencil.c)
target_link_libraries(stencil ${LIBS})

add_executable(texprox texprox.c)
target_link_libraries(texprox ${LIBS})

add_executable(aargb aargb.c)
target_link_libraries(aargb ${LIBS})

add_executable(cube cube.c)
target_link_libraries(cube ${LIBS})

add_executable(fogindex fogindex.c)
target_link_libraries(fogindex ${LIBS})

add_executable(lines lines.c)
target_link_libraries(lines ${LIBS})

add_executable(multisamp multisamp.c)
target_link_libraries(multisamp ${LIBS})

add_executable(quadric readImage.c quadric.c)
target_link_libraries(quadric ${LIBS})

add_executable(stroke stroke.c)
target_link_libraries(stroke ${LIBS})

add_executable(texsub texsub.c)
target_link_libraries(texsub ${LIBS})

add_executable(accanti accanti.c)
target_link_libraries(accanti ${LIBS})

add_executable(checker checker.c)
target_link_libraries(checker ${LIBS})

add_executable(cubemap cubemap.c)
target_link_libraries(cubemap ${LIBS})

add_executable(font font.c)
target_link_libraries(font ${LIBS})

add_executable(list list.c)
target_link_libraries(list ${LIBS})

add_executable(multitex multitex.c)
target_link_libraries(multitex ${LIBS})

add_executable(colormatrix readImage.c colormatrix.c)
target_link_libraries(colormatrix ${LIBS})

add_executable(surface surface.c)
target_link_libraries(surface ${LIBS})

add_executable(texture3d texture3d.c)
target_link_libraries(texture3d ${LIBS})

add_executable(accpersp accpersp.c)
target_link_libraries(accpersp ${LIBS})

add_executable(clip clip.c)
target_link_libraries(clip ${LIBS})

add_executable(hello hello.c)
target_link_libraries(hello ${LIBS})

add_executable(mvarray mvarray.c)
target_link_libraries(mvarray ${LIBS})

add_executable(surfpoints surfpoints.c)
target_link_libraries(surfpoints ${LIBS})

add_executable(texturesurf texturesurf.c)
target_link_libraries(texturesurf ${LIBS})

add_executable(alpha3D alpha3D.c)
target_link_libraries(alpha3D ${LIBS})

add_executable(dof dof.c)
target_link_libraries(dof ${LIBS})

add_executable(histogram readImage.c histogram.c)
target_link_libraries(histogram ${LIBS})

add_executable(pickdepth pickdepth.c)
target_link_libraries(pickdepth ${LIBS})

add_executable(robot robot.c)
target_link_libraries(robot ${LIBS})

add_executable(teapots teapots.c)
target_link_libraries(teapots ${LIBS})

add_executable(torus torus.c)
target_link_libraries(torus ${LIBS})

add_executable(alpha alpha.c)
target_link_libraries(alpha ${LIBS})

add_executable(colormat colormat.c)
target_link_libraries(colormat ${LIBS})

add_executable(double double.c)
target_link_libraries(double ${LIBS})

add_executable(image image.c)
target_link_libraries(image ${LIBS})

add_executable(material material.c)
target_link_libraries(material ${LIBS})

add_executable(picksquare picksquare.c)
target_link_libraries(picksquare ${LIBS})

add_executable(scene scene.c)
target_link_libraries(scene ${LIBS})

add_executable(tess tess.c)
target_link_libraries(tess ${LIBS})

add_executable(trim trim.c)
target_link_libraries(trim ${LIBS})

add_executable(bezcurve bezcurve.c)
target_link_libraries(bezcurve ${LIBS})

add_executable(drawf drawf.c)
target_link_libraries(drawf ${LIBS})

add_executable(minmax readImage.c minmax.c)
target_link_libraries(minmax ${LIBS})

add_executable(planet planet.c)
target_link_libraries(planet ${LIBS})

add_executable(select select.c)
target_link_libraries(select ${LIBS})

add_executable(tesswind tesswind.c)
target_link_libraries(tesswind ${LIBS})

add_executable(unproject unproject.c)
target_link_libraries(unproject ${LIBS})

add_executable(bezmesh bezmesh.c)
target_link_libraries(bezmesh ${LIBS})

add_executable(colortable readImage.c colortable.c)
target_link_libraries(colortable ${LIBS})

add_executable(feedback feedback.c)
target_link_libraries(feedback ${LIBS})

add_executable(mipmap mipmap.c)
target_link_libraries(mipmap ${LIBS})

add_executable(pointp pointp.c)
target_link_libraries(pointp ${LIBS})

#add_executable(shadowmap shadowmap.c)
#target_link_libraries(shadowmap ${LIBS})

add_executable(texbind texbind.c)
target_link_libraries(texbind ${LIBS})

add_executable(varray varray.c)
target_link_libraries(varray ${LIBS})

add_executable(bezsurf bezsurf.c)
target_link_libraries(bezsurf ${LIBS})

add_executable(combiner combiner.c)
target_link_libraries(combiner ${LIBS})

add_executable(fog fog.c)
target_link_libraries(fog ${LIBS})

add_executable(model model.c)
target_link_libraries(model ${LIBS})

add_executable(polyoff polyoff.c)
target_link_libraries(polyoff ${LIBS})

add_executable(smooth smooth.c)
target_link_libraries(smooth ${LIBS})

add_executable(texgen texgen.c)
target_link_libraries(texgen ${LIBS})

add_executable(wrap wrap.c)
target_link_libraries(wrap ${LIBS})

add_executable(convolution readImage.c convolution.c)
target_link_libraries(convolution ${LIBS})
