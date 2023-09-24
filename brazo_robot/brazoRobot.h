
class BrazoRobotico{
	private:
		double X;
		double Y;
		double Z;
		bool SujetandoObj;
	public:
		BrazoRobotico(double X, double Y, double Z);

		double GetX() const;
		double GetY() const;
		double GetZ() const;

		bool SujObj() const;

		void Coger();
		void Soltar();
		void Mover(double newX, double newY, double newZ);

};
