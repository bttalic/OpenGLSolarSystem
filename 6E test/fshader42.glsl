#version 150 

in  vec2 texCoord;
in  vec4 color;

out vec4 fColor;

uniform sampler2D texture;
void main() 
{ 

	fColor = color * texture2D( texture, texCoord );
} 

