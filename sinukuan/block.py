import pygame, random, math

class Block:
    def __init__(self, position, material, screen):
        self.position = position
        self.material = material
        self.screen = screen
    
    def draw(self):
        pygame.draw.rect(self.screen, self.material, (self.position[0]-5, self.position[1]-5, 10, 10))