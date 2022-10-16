import Effect from '../effect.js';

export default class RandomEach extends Effect {

  constructor(matrixsize) {
    super(matrixsize);
    this.fade = true;
    this.framespeed_ms = 2;
  }

  nextframe() {
    this.currentmatrix = this.generate_matrix(this.nextmatrix);
    for(var i = 0; i < this.nextmatrix.length; i++) {
      for(var j = 0; j < this.nextmatrix[i].length; j++) {
        this.nextmatrix[i][j].set_color(Math.floor(Math.random()*256),Math.floor(Math.random()*256),Math.floor(Math.random()*256));
      }
    }
    return this.currentmatrix;
  }
}