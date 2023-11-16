# OpenGL In Depth
Are you interested in learning about graphics programming using OpenGL? Have you ever wanted to create your own fully-interactive 3D applications? Now is your chance to get in tune with this popular 3D graphics API! 

## Introduction to OpenGL


### Introduction
In this video you are introduced to your instructors and also includes a brief discussion of the upcoming lessons. Please be sure you understand C++ before you begin!

### Intro to Vectors
Before we begin in earnest on the programming end of things, we need to begin with a serious primer for use of vector math, a critical topic for 3D programming.

### Vector Operations
Continuing with the discussion of vectors, this video discusses the dot product and cross product operations, as well as their importance in programming.

### Vector Class
With the introductory lessons to vectors completed, we now begin some programming by creating a very simple vector class that will handle our necessary operations.

### Matrices
This is another conceptual lesson. This time, we introduce you to the concept of matrices, which will be useful in transformations, as well as many other functions.

### Transformations
Combining the mathematical concepts discussed so far (vectors and matrices), we now shift over and introduce the concept of transformations in OpenGL.

### Viewports and Projections
We now take a look at the concepts behind viewports (ways to see into the 3D world) and projections, which control how we will see the scene in the viewport.

### GLUT Install
Our next step is to get our hands on GLUT, a toolkit that we will be using throughout these videos. Directions on downloading and installing it can be found here!

### GLUT
With GLUT installed, we now create a very simple application using it. For this example, we create a window with a multicolored cube inside of it.

### SDL Install
Another tool we'll be using is SDL, which allows us to have low-level access to audio, keyboard, mouse, joystick, and 3D hardware via OpenGL.

### SDL
With SDL now installed, we now create our first SDL program. For simplicity, we'll reuse the example created in the GLUT video, reworked for SDL.

### Windows API
Now that we've seen GLUT and SDL, we now need to take a look at the Windows API. We'll handle this by creating a new version of our cube program.

### wxWidgets Install
We now take a look at how you can download and install wxWidgets, which is a C++ GUI framework. After this video, wxWidgets will be ready to use.

### wxWidgets
wxWidgets has now been installed. We're now going to create our cube rotation program one last time using object-orientation, utilizing wxWidgets.

### Intro to Textures
You've now seen how to create a very simple OpenGL application. We now look at textures and discuss how they are applied to your 3D objects.

### Texture Class
The lesson moves on beyond the conceptual and into a practical example. Here, we show how to create a Texture class to add textures to the sides of our cube.

### Intro to Lighting
Texturing is really only part of the process. Another critical part to creating a convincing 3D scene is to have some sort of lighting. We introduce the concepts here.

### Light Class
With an understanding of lighting concepts, we can now put them into practical use by creating a Light class, allowing lights to be placed within our scene.

### Light Demo
As a demonstration, we now modify our SDL application to create a scene with a grid floor and a series of animated spotlights that shine onto the floor.

### Materials
This video introduces the concept of Materials, which are ways to define the way that light behaves with a surface, with a deeper degree of control than just a texture.

### Display Lists
We now move on to the concept of Display Lists. These allow you to optimize lists of complicated data by placing them in a streamlined area of memory.

### GLEngine
It is now time for us to start combining our classes together into a single engine (the GLEngine). We discuss the process of setting up this engine in this video.

### Drawing Text
In order to allow text to be drawn within our OpenGL window, we need to make some changes to our rendering engine. In this video we show you how to do this.

## Particle Engine


### Intro to Particle Engine
Our next milestone combines many of the skills we've picked up so far as we program our own particle engine in OpenGL. Here we introduce the opcoming lessons.

### Control Abstract Class
Our first step in creating the particle engine will be to construct an abstract class for our various forms of controls that will be used on our particles.

### Button Class
The abstract control class has been defined. We now create a new Button class that will derive from the Control class, allowing us to make an actual control.

### ListBox Class
Moving on beyond the realm of a simple button, we once again inherit from the Control class to create a simple listbox that will store various settings.

### Slider Class
Continuing with the creation of our custom controls, we derive once more from the Control class to create a simple slider control.

### Viewport Navigation
This video introduces you to viewport navigation. This will allow us to use our mouse as a navigational device, rather than being restricted to the arrow keys.

### Emitter and Particle Class Intro
Our controls are all established, and our SDL application is ready to be modified into a particle application. We now introduce the Emitter and Particle classes.

### Emitter Particle Classes
We now create the actual Emitter and Particle classes that were discussed in this video. We'll be creating them simultaneously for addition into the SDL application.

### Displaying Our Particles
Here we clean up the SDL application, copy the grid from the lighting demo, and finally create an emitter that will allow us to see our particles!

### Adding Controls
Now that we can see some particles, we're going to get the bulk of the program wrapped up by adding in some controls for real time particle editing.

### Bonus Texture Modes
In this little bit of a bonus video, we step outside the plan a bit in order to allow our particles to handle different draw modes than just multiplying overlapping values.

## Model Importer & Viewer


### OBJ Intro
This is an introductory lesson to creating your own OBJ importer, allowing you to bring Alias OBJ 3D models into your OpenGL applications.

### Model Header
Now that we know how the OBJ file stores its data and we see how the MTL file is working, we can create the header that will allow us to bring in the model.

### Loading Models
We will now expand upon the existing imporer by working on the Model.cpp file, providing some of the primary framework for bringing in our own models.

### Loading Materials
Continuing with the Model.CPP file, we show how you can go about bringing in your materials in the form of the MTL files associated with your OBJ.

### Fixing Bugs
No programming job is complete without at least one round of bug fixing. In this video we take a look at the first round of debugging in our program.

### OBJ Viewer
Our Model class is complete and debugged. Next, we use that class in a new OpenGLapplication so that we can bring in our models and actually see them!

### Scene Graph Intro
Our next task is to create a scene graph for our applications. In this video, we introduce the concept, as well as overview what we will need to create along the way.

### Writing Headers
We now get all of our headers written. We will start with the stripped down version of the SDL app, and we will be including many of the things coded so far.

### Node Class
In this video we take on creating the Node.CPP file that will handle the base class for any nodes created in our application.

### Mesh and Transform Nodes
We now fill in the remaining code necessary for the Transform.CPP file as well as the Mesh.CPP file.

### Cube and Plane Nodes
Next, we create the Cube.CPP file and the Plane.CPP file. Using the code from the Mesh.CPP, we add all of the components of the geometry.

### Creating Controls
Before we can test out how things are working in our classes, we are going to need to implement some basic controls for creating and controlling our geometry.

### Selecting and Deleting Objects
The next critical section of functionality includes the ability to have mouse selection and then deletion. First, we fix an issue with our cube.

### Parenting
Our final bit of funtionality that we'll need to add into our SDL demo will be the creation of hierarchies thorugh object parenting.

### Introduction pt2
In this video we introduce the second part of of the OpenGL series. This new section introduces several new concepts, each outlined here.

### Antialiasing
This first video within the actual Part II lessons discusses the concept of Antialiasing and some methods for employing it in your applications.

### Curves
We move on to a very technical lesson that discuses curves, the math behind them, and why this knowledge can be important in our applications.

### Curves Example
After discussing the theory and math behind curvature, we now shift over to a practical application of these concepts by making a curve generator applicaiton.

### Optimization Techniques
Here we discuss - very generally - some popular techniques for optimizing your OpenGL applications for greater efficiency. 

### Reflections
This video takes a look at stencil buffer reflections, what they are and how they work and are generated inside of 3D applications. 

### Reflection Coding
Now that we have a greater understanding of reflection concepts in OpenGL, we now take a practical approach by adding reflections into our application.

### Shadows
In this video we take a look at using the stencil buffer to generate shadows in your application, the types of shadows available, and techniques for creating them.

### Shader Overview
Here we overview the concepts behind shaders, taking a short break from actually discussing OpenGL and focusing on shader development.

### Intro to RenderMonkey
For starters, we're going to look at ATI's RenderMonkey, showing where to get it, how to install it, it's user interface, and how to get started using it.

### Writing a Basic Shader
It's time for us to take a look at actually writing our own shader. We also discuss some of the new data types that will be needed as well as other attributes that are new to us.

### Glew Installation
We now want to get our shaders into our applications, and we begin this by getting our hands on the GL Extension Wrangler (GLEW), demonstrating its download and installation.

### Shader Implementaion in Application
We now have all of the tools and assets we need to create our own shaders and implement them in our apps. In this video, we take a look at applying them to geometry in our program.

### The Shader Class
Taking a look at a more flexible implementation of shaders, we now show how to create a Shader class that allows us to treat our shaders like objects in our code.

### Shader Development Phong
We know how to create and implement shaders. We now jump back over into RenderMonkey and examine how we can create our own shader using the Phong lighting model.

### Shader Development Bump
Our Phong shader is in place and working inside of RenderMonkey. We now take a look at adding bump through the implementation of normal mapping.

### Using Shader Class for Bump Shader
In this video we show how you can bring your normal mapped Phong shader into your own applications by using and modifying the existing Shader class.

### Exploring Shaders
In the final video for the shader section, we start exploring some more shader features such as light intensity, light color, light animation, texture animation, and vertex manupulation.

### FBX Importer Intro
We now introduce a small bonus section of the OpenGL series in which we show how you can integrate an FBX importer into your applications.

### FBX SDK Installation
First, we need to install the FBX SDK. Note that this video predates the Autodesk acquisition of Alias. The new download location for the SDK can be found <A HREF=http://usa.autodesk.com/adsk/servlet/index?siteID=123112&id=6839916>via this link</A>

### Reinventing the Wheel
In this very important video, we show how to implement some of the critical files included with the SDK and how to reuse what has been already provided rather than having to write it yourself.

### The FBX Mesh Class
To begin the FBX system, we start out by creating the mesh loader. In this video we create the Mesh header file and the Mesh.CPP file, as well as overview all the things we need to do for this class.

### FBX Loader pt1
We now focus on creating the FBX Loader. In this first video, we get the header set up and complete,get the CPP file in place and then work on the loading code.

### FBX Loader pt2
Here we wrap up the FBX Loader by getting the drawing code into place, as well as the compute transformations functionality. This allows for animation of our meshes, and has already been included for us.

### Debugging and Conclusion
This video concludes the OpenGL In-Depth series by debugging our final code, testing our program, and then wrapping everything up for our applicaiton.

