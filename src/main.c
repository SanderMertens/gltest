#include <gltest.h>

#if defined(__APPLE__)
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <OpenGL/gl.h>
#include <OpenGL/glu.h>

int main(int argc, char *argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH | GLUT_RGBA);
    glutInitWindowSize(512, 512);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Hello!");

    int size;
    glGetIntegerv(GL_MAX_TEXTURE_SIZE, &size);
    printf("size = %d\n", size);

    return 0;
}
