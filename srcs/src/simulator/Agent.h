#ifndef AGENT_H
#define AGENT_H

class Agent{
	protected:
		double _p[2];
		double _p_prev[2];
		double _q[2];
		double _d[2];
		double _v = 1.0;
		double _v_sim = 1.0;
		double _w = 0.0;
		double _w_sim = 0.0;
		double _r = 0.5;
		int _fov = 190.0;
		double _front = 0.0;
		int _qlim = 20;
		double* _dmap;
		double* _vmap;
		double _depth = 30.0;
		int _interval = 10;
		bool _col = false;
		bool _stop = false;

		int _id;
		double _color[3];

	public:
		Agent();
		~Agent();

		void Update(double* p);
		void Render();

		void setAction(double delta_t, double delta_v, bool isStop);
		void Action();
		void Revert(double* p, bool col);

		void setP(double x, double y) {_p[0] = x; _p[1] = y;};
		void setPprev(double x, double y) {_p_prev[0] = x; _p_prev[1] = y;};
		void setQ(double x, double y) {_q[0] = x; _q[1] = y;};
		void setD(double x, double y) {_d[0] = x; _d[1] = y;};
		void setV(double v) {_v = v;};
		void setVsim(double v) {_v_sim = v;};
		void setW(double w) {_w = w;};
		void setWsim(double w) {_w_sim = w;};
		void setR(double r) {_r = r;};
		void setFov(int f) {_fov = f;};
		void setFront(double f) {_front = f;};
		void setQlim(int q) {_qlim = q;};
		void setDmap(double* d) {_dmap = d;};
		void setVmap(double* v) {_vmap = v;};
		void setDepth(double d) {_depth = d;};
		void setInterval(int i) {_interval = i;};
		void setCol(bool c) {_col = c;};
		void setId (int id) {_id = id;}
		void setColor(double r, double g, double b) {_color[0] = r; _color[1] = g; _color[2] = b;};

		double* getP() {return _p;};
		double* getPprev() {return _p_prev;};
		double* getQ() {return _q;};
		double* getD() {return _d;};
		double getV() {return _v;};
		double getW() {return _w;};
		double getVsim() {return _v_sim;};
		double getWsim() {return _w_sim;};
		double getR() {return _r;};
		int getFov() {return _fov;};
		double getFront() {return _front;};
		int getQlim() {return _qlim;};
		double* getDmap() {return _dmap;};
		double* getVmap() {return _vmap;};
		double getDepth() {return _depth;};
		int getInterval() {return _interval;};
		bool getCol() {return _col;};
		int getId () const {return _id;}
		double* getColor() {return _color;}
};

#endif
