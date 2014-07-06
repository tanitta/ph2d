#pragma once
#include "ofMain.h"
#include "KineticModel.hpp"
namespace py2d
{
	class Chip
	{
	public:
		std::vector<py2d::KineticModel> vertices; 
		double differenceTime;
		double mass;
		Chip():
			differenceTime(1.0/30.0),
			mass(1),
			vertices(4){
			// vertices.resize(4);
			for(py2d::KineticModel v : vertices){
				v.differenceTime = differenceTime;
				v.mass = mass*0.25;
			};
		};
		virtual ~Chip(){};
		
		void update(){
			for(py2d::KineticModel v : vertices){
				v.update();
			};
		};
		void draw(){
			for(py2d::KineticModel v : vertices){
				v.draw();
			};
		};
	};
}